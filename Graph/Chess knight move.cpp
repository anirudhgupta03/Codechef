#include<bits/stdc++.h>
using namespace std;

int dx[8] = {-2,-2,2,2,-1,-1,1,1};
int dy[8] = {1,-1,1,-1,2,-2,2,-2};
bool isValid(int x, int y, vector<vector<int>> &vis){
    
    if(x < 0 || x >= 8 || y < 0 || y >= 8){
        return false;
    }
    
    if(vis[x][y] == 1){
        return false;
    }
    return true;
}
void bfs(int sx, int sy, vector<vector<int>> &vis, vector<vector<int>> &dist){
    
    vis[sx][sy] = 1;
    dist[sx][sy] = 0;
    
    std::queue<pair<int,int>> q;
    q.push({sx,sy});
    
    while(!q.empty()){
        
        int currx = q.front().first, curry = q.front().second;
        q.pop();
        for(int i = 0; i < 8; i++){
            
            int newx = currx + dx[i], newy = curry + dy[i];
            
            if(isValid(newx, newy, vis)){
                vis[newx][newy] = 1;
                dist[newx][newy] = dist[currx][curry] + 1;
                q.push({newx,newy});
            }
        }
    }
}
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        string s1, s2;
        cin >> s1 >> s2;
        
        int sy = s1[0] - 97, sx = s1[1] - 49;
        int ey = s2[0] - 97, ex = s2[1] - 49;
        
        vector<vector<int>> vis(8, vector<int>(8,0));
        vector<vector<int>> dist(8, vector<int>(8));
        
        bfs(sx, sy, vis, dist);
        
        cout << dist[ex][ey] << endl;
    }
}
