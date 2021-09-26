//Ref: https://www.youtube.com/watch?v=5Xt-Z3c7Qbs&t=750s
#include <bits/stdc++.h>
using namespace std;

bool win(long long n){
    
    if(n == 0) return 0;
    else if(n % 2 != 0) return !win(n-1);
    else if(n % 4 != 0) return !win(n/2);
    else return 1;
}
int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        
        long long n;
        cin >> n;
        
        if(win(n)) cout << "Alice" << endl;
        else       cout << "Bob" << endl;
    }
	  return 0;
}
