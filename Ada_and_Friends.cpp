#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
// #define ll long long
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
   int frd, lve; cin>>frd>>lve;
   vi v;
   unordered_map<string, int>mp;

   for(int i = 0; i<frd; i++){
        string str; 
        int nmb;
        cin>>str>>nmb;

        mp[str] += nmb;
   }

   for(auto it: mp){
        v.push_back(it.second);
   }
   sort(rall(v));

   int sz = (v.size()>lve)?lve:v.size();
   int cn = 0; 
   for(int i = 0; i<sz; i++){
    cn+=v[i];
   }
   cout<<cn<<nl;
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}