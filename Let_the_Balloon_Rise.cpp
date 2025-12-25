
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
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    while(1){
        int n; cin>>n;
        if(n==0) break;
        else{
            int mx = 0;
            map<string, int>mp;
            for(int i = 0; i<n; i++){
                string s; cin>>s;
                mp[s]++;
                mx = max(mx, mp[s]);
            }
            for(auto it:mp){
                if(it.second==mx){
                    cout<<it.first<<nl;
                }
            }
        }
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}