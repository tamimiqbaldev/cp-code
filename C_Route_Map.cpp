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
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<string>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int n, m; cin>>n>>m;
    vi vn, vm;
    for(int i = 0; i<n; i++){
        string s; cin>>s;
        vn.push_back(s);
    }
    
    for(int j = 0; j<m; j++){
        string x; cin>>x;
        vm.push_back(x);
    }
    
    for(int i = 0; i<n; i++){
        auto it = find(all(vm), vn[i]);
        if(it!=vm.end()) cout<<"Yes\n";
        else cout<<"No\n";
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}