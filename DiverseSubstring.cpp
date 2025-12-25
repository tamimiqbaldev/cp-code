#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"

signed main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char, int>mp;
    for(int i = 0; i<n; i++){
        mp[s[i]]++;
    }
    for(auto it : mp){
        if(it.second>n/2) {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n"<<s<<nl;
    return 0;
}
