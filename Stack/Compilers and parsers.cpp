//If we find a '>' without having a previous '<' then we break 
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        string s;
        cin>>s;
        
        int sum=0,count=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='>'){
                sum=sum-1;
                if(sum<0){
                    break;
                }
            }
            if(s[i]=='<'){
                sum=sum+1;
            }
            
            if(sum==0){           //This implies that it is a valid string
                count=i+1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
