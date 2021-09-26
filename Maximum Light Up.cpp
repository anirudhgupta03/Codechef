#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin >> t;
  
  while(t--){
  
      long long int p, a, b, c, x, y;
      cin >> p >> a >> b >> c >> x >> y;
      long long int u = b + x * a, v = c + y * a;
      long long int ans = p / min(u, v);

      cout << ans << endl;
  }
}
