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
    int na, nb; cin>>na>>nb;
    sett sab;
    for(int i = 0; i<na; i++){
        int x; cin>>x;
        sab.insert(x);
    }
    for(int i = 0; i<nb; i++){
        int x; cin>>x;
        sab.insert(x);
    }
    for(auto x:sab) cout<<x<<" ";
    cout<<nl;
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}