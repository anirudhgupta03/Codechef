#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n,k;
        cin >> n >> k;
        
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = INT_MIN, l = 0, r = 0;
        
        map<int,int> m;
        
        while(l <= r && r < n){
            
            m[a[r]]++;
            
            if(m.size() < k && r < n)
            {
                ans = max(ans,r-l+1);
                r++;
            }
            else
            {
                while(m.size() == k){
                    m[a[l]]--;
                    if(m[a[l]] == 0){
                        m.erase(a[l]);
                    }
                    l++;
                }
                r++;
            }
            
        }
        cout << ans << endl;
    }
    
	return 0;
}
