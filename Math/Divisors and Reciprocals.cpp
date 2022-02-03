//Ref: https://www.codechef.com/START24B/problems/DIVREC
//
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        
        ll x,a,b;
        cin >> x >> a >> b;
        
        if((x*b)%a != 0){
            cout << -1 << endl;
            continue;
        }
        
        ll n = ((ll)x*b)/(ll)a;
        ll sum = 0;
        
        if(n > x){
            cout << -1 << endl;
            continue;
        }
        for(ll i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                sum += i;
                sum += n/i;
                if(n/i == i) sum -= i;
            }
        }
        if(sum == x){
            cout << n << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
	return 0;
}
