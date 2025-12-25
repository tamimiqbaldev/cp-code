#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ul unsigned long long
#define flt long double
#define psbk push_back
#define psfr push_front
#define ppbk pop_back
#define ppfr pop_front
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend() 
#define mkpr make_pair 
#define mpi map<int, ll>
#define mps map<string, int>
#define sett set<int>
#define que queue<int>
#define dque deque<int>
#define vec vector<int>
#define prque priority_queue<int>  
#define aprque priority_queue<int, vector<int>, greater<int>>  
#define vvec vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define octroi 1e9+7


void solve(){
    string s;
    cin>>s;
    mpi mp;
    for(auto &x:s){
        int n = x-'0';
        mp[n]++;
    }
    ll freq = LLONG_MIN;
    for(auto [u,v]:mp){
        freq = max(freq, v);
    }

    for(auto [u, v]:mp){
        if(v == freq){
            cout<<u<<nl;
            return;
        }
    }
}

signed main(){
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}