#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

void dfs(int node, vector<int> &vis, vector<int> al[], ll &count){
    
    vis[node] = 1;
    count++;
    
    for(int i = 0; i < al[node].size(); i++){
        
        int child = al[node][i];
        
        if(vis[child] == 0){
            dfs(child, vis, al, count);
        }
    }
}
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n,m;
        cin >> n >> m;
        
        std::vector<int> al[n+1];
        
        int a,b;
        
        while(m--){
            cin >> a >> b;
            al[a].push_back(b);
            al[b].push_back(a);
        }
        vector<int> vis(n+1,0);
        
        ll fireexits = 0, captains = 1, count = 0;
        
        for(int i = 1; i <= n; i++){
            
            if(vis[i] == 0){
                fireexits++;
                dfs(i,vis,al,count);
                captains = (captains*count)%(mod);
                count = 0;
            }
        }
        
        cout << fireexits << " " << captains << endl;
    }
}
