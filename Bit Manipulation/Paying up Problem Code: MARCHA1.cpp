#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
       int n,m;
       cin>>n>>m;
       int arr[n];
       for(int i=0;i<n;i++) cin>>arr[i];
       int flag=0;
       for(int i=0;i<(1<<n);i++){
           int sum=0;
           for(int j=0;j<n;j++){
               int x=(1<<j);
               
               if((i&x)!=0){
                    sum=sum+arr[j];   
               }
           }
           if(sum==m){
               cout << "Yes" << endl;
               flag=1;
               break;
           }
       }
       if(flag==0){
           cout << "No" << endl;
       }
    }
    return 0;
}
