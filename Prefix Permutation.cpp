#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    
    ll t;
    cin >> t;
    
    while(t--){
        
        ll n,k;
        cin >> n >> k;
        
        vector<ll> a(k);
        
        for(ll i = 0; i < k; i++){
            cin >> a[i];
        }
        
        ll ind = 1;
        
        for(ll i = 0; i < k; i++){
            ll temp1 = a[i];
            ll temp2 = ind;
            while(temp1 >= temp2){
                cout << temp1 << " ";
                temp1--;
            }
            ind = a[i] + 1;
        }
        cout << endl;
    }
	return 0;
}
