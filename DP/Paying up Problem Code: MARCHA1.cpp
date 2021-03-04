#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n,m;
        cin >> n >> m;
        
        int a[n];
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int dp[n+1][m+1];
        
        for(int j = 1; j < m + 1; j++){
            dp[0][j] = 0;
        }
        for(int i = 0; i < n + 1; i++){
            dp[i][0] = 1;
        }
        
        for(int i = 1; i < n + 1; i++){
            for(int j = 1; j < m + 1; j++){
                
                if(a[i-1] <= j){
                    dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[n][m]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
