#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define ul unsigned long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend() 
// #define mp make_pair 
#define mpi map<int, int>
#define mps map<string, int>
#define vec vector<int>
#define sett set<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int n; cin>>n;
    vec v(n);

    for(int i = 0; i<n; i++) cin>>v[i];

    int mn = abs(v[0]);
    for(int i = 1; i<n; i++){
        mn = min(mn, abs(v[i]));
    }
    cout<<mn<<nl;
    
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}