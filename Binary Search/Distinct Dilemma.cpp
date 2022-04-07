#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){     
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        ll lo = 1, hi = 1e9;
        ll ans;
        while(lo <= hi){
            ll mid = (lo + hi)/2;
            if((mid*(mid + 1)/2) <= sum){
                ans = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        cout << ans << endl;
    }
	return 0;
}
