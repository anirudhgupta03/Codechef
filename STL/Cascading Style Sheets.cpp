#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m;
    cin >> n >> m;
    
    map<pair<int,int>,pair<int,int>> mp;
    
    while(n--){
        int id,attr,val,priority;
        
        cin >> id >> attr >> val >> priority;
        pair<int,int> p1 = make_pair(id,attr);
        pair<int,int> p2 = make_pair(val,priority);
        
        if(mp.find(p1) == mp.end()){
            mp[p1] = p2;
        }
        else{
            if(mp[p1].second < p2.second || mp[p1].second == p2.second){
                mp[p1] = p2;
            }
        }
    }
    while(m--){
        int id, attr;
        cin >> id >> attr;
        cout << mp[make_pair(id,attr)].first << endl;
    }
	return 0;
}
