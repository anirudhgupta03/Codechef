//https://www.codechef.com/START24B/problems/ANTI_PAL/
#include <bits/stdc++.h>
using namespace std;

#define pci pair<char,int>
struct cmp{
  bool operator()(pci &p1, pci &p2){
      return p1.second < p2.second;
  }  
};
int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        if(n % 2 != 0){
            cout << "NO" << endl;
            continue;
        }
        
        vector<int> alpha(26, 0);
        
        for(int i = 0; i < n; i++){
            alpha[s[i] - 'a']++;
        }
        
        priority_queue<pci, vector<pci>, cmp> pq;
        
        for(int i = 0; i < 26; i++){
            if(alpha[i]){
                pq.push({i + 'a', alpha[i]});
            }
        }
        
        vector<char> res(n);
        int l = 0, r = n - 1;
        
        bool flag = true;
        while(!pq.empty()){
            if(pq.size() == 1){
                flag = false;
                break;
            }
            pci p1 = pq.top();
            pq.pop();
            pci p2 = pq.top();
            pq.pop();
            
            int cnt1 = p1.second, cnt2 = p2.second;
            
            res[l] = p1.first;
            res[r] = p2.first;
            l++;
            r--;
            
            cnt1--;
            cnt2--;
            if(cnt1){
                pq.push({p1.first, cnt1});
            }
            if(cnt2){
                pq.push({p2.first, cnt2});
            }
        }
        
        if(flag){
            cout << "YES" << endl;
            for(int i = 0; i < n; i++){
                cout << res[i];
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
