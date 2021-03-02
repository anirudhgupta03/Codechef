#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t-->0)
	{
	    ll n,m,l;
	    cin>>n>>m;
	    map<ll,ll> mp;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>l;
	        mp[l]=1;
	    }
        for(int i=0;i<m;i++)
        {
            cin>>l;
            if(mp[l]==1)
            cout<<"YES\n";
            else
             {   cout<<"NO\n";
                  mp[l]=1;
             }
        }
	    mp.clear();
	}
	return 0;
}
