#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        
        int a[n];
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int cnt1 = 0, cnt2 = 0, flag = 1;
        
        for(int i = 0; i < n; i++){
            
            if(a[i] == 5){
                cnt1++;
            }
            else if(a[i] == 10){
                if(cnt1 == 0){
                    flag = 0;
                    cout << "NO" << endl;
                    break;
                }
                else{
                    cnt2++;
                    cnt1--;
                }
            }
            else{
                if(cnt2 >= 1){
                    cnt2--;
                }
                else if(cnt1 >= 2){
                    cnt1 -= 2;
                }
                else{
                    flag = 0;
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if(flag == 1){
            cout << "YES" << endl;
        }
    }
	return 0;
}
