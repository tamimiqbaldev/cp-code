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
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int n; cin>>n;
    map<string, int>mp;
    int mx = 0;
    for(int i = 0; i<n; i++){
        string str; cin>>str;
        mp[str]++;
        mx = max(mx, mp[str]);
    }   
    for(auto it:mp){
        if(it.second == mx){
            cout<<it.first<<nl;
        }
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}