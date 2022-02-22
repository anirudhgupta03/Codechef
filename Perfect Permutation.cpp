//Ref: https://www.youtube.com/watch?v=qAwwJSntaAM&t=599s
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    
    ll t;
    cin >> t;
    
    while(t--){
        
        ll n,k;
        cin >> n >> k;
        
        if(k == n){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            cout << n - k + 1 << " ";
            for(int i = 1; i <= n - k ;i++){
                cout << i << " ";
            }
            for(int i = n - k + 2;  i <= n; i++){
                cout << i << " ";
            }
            cout << endl;
        }
    }
	return 0;
}
