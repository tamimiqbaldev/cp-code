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
#define rall(x) (x).rbegin(), (x).rend() 
// #define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define sett set<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int n; cin>>n;
    vector<bool>v(n+10);
    v[1] = false;
    for(int i = 2; i<=n; i++)  v[i] = true;
    for(int i = 2; i<=n; i++){
        for(int j = 2*i; j<=n; j+=i) v[j] = false;
    }
    for(int k = 1; k<=n; k++){
        if(v[k] == true) cout<<k<<" ";
    }
    cout<<nl;
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}