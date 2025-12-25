#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mpp map<string, string>
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int n, m;
    cin>>n>>m;

    mpp mp;
    for(int i = 0; i<n; i++){
        string s1, s2;//name, ip
        cin>>s1>>s2;
        mp[s2] = s1;//ip->key   name->value
    }
    for(int i = 0; i<m; i++){
        string ss1, ss2;
        cin>>ss1>>ss2;
        ss2.pop_back();
        if(mp.count(ss2)) cout<<ss1<<" "<<ss2<<"; #"<<mp[ss2]<<nl;
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}