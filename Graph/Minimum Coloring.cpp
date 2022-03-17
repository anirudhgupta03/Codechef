//https://www.codechef.com/START30B/problems/MINCOLOR
#include <bits/stdc++.h>
using namespace std;

#define pll pair<ll,ll>
#define ll long long

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main() {
    
    ll t;
    cin >> t;
    
    while(t--){
        
        int n,m;
        cin >> n >> m;
        
        int x1, y1;
        cin >> x1 >> y1;
        
        int x2, y2;
        cin >> x2 >> y2;
        
        vector<vector<ll>> v(n, vector<ll>(m,0));
        
        v[x1 - 1][y1 - 1] = 1;
        v[x2 - 1][y2 - 1] = 2;
        
        queue<pll> q;
        x1 -= 1;
        y1 -= 1;
        x2 -= 1;
        y2 -= 1;
        
        for(int i = 0; i < 4; i++){
            int x3 = x1 + dx[i], y3 = y1 + dy[i];
            if(x3 >= 0 && y3 >= 0&& x3 < n && y3 < m && v[x3][y3] == 0){
                q.push({x3, y3});
            }
        }
        
        ll count1 = 2;
        while(!q.empty()){
            int x = q.front().first, y = q.front().second;
            q.pop();
            
            if(v[x][y] != 0) continue;
            
            unordered_set<int> temp;
            for(int i = 0; i < 4; i++){
                int x3 = x + dx[i], y3 = y + dy[i];
                if(x3 >= 0 && y3 >= 0 && x3 < n && y3 < m){
                    if(v[x3][y3] == 0){
                        q.push({x3, y3});
                    }
                    else{
                        temp.insert(v[x3][y3]);
                    }
                }
            }
            bool flag = false;
            for(int i = 1; i <= count1; i++){
                if(temp.find(i) == temp.end()){
                    v[x][y] = i;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                count1++;
                v[x][y] = count1;
            }
        }
        
        ll count2 = 2;
        vector<vector<ll>> p(n, vector<ll>(m,0));
        
        p[x1][y1] = 1;
        p[x2][y2] = 2;
        
        for(int i = 0; i < 4; i++){
            int x3 = x2 + dx[i], y3 = y2 + dy[i];
            if(x3 >= 0 && y3 >= 0 && x3 < n && y3 < m && p[x3][y3] == 0){
                q.push({x3, y3});
            }
        }
        
        while(!q.empty()){
            int x = q.front().first, y = q.front().second;
            q.pop();
            
            if(p[x][y] != 0) continue;
            
            unordered_set<int> temp;
            for(int i = 0; i < 4; i++){
                int x3 = x + dx[i], y3 = y + dy[i];
                if(x3 >= 0 && y3 >= 0 && x3 < n && y3 < m){
                    if(p[x3][y3] == 0){
                        q.push({x3, y3});
                    }
                    else{
                        temp.insert(p[x3][y3]);
                    }
                }
            }
            bool flag = false;
            for(int i = 1; i <= count2; i++){
                if(temp.find(i) == temp.end()){
                    p[x][y] = i;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                count2++;
                p[x][y] = count2;
            }
        }
        
        if(count1 < count2){
            // cout << "HI" << endl;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cout << v[i][j] << " ";
                }
                cout << endl;
            }
        }
        else{
            // cout << "HELLO" << endl;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cout << p[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
	return 0;
}
