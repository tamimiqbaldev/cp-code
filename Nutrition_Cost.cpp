#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
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
#define mpi map<int, int>
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

void solve(){
    int n, c; cin>>n>>c;
    vec vt(n), cst(n);
    for(int i = 0; i<n; i++){
        cin>>vt[i];
    }
    for(int j = 0; j<n; j++){
        cin>>cst[j];
    }
    
    mpi mp;
    for(int i = 0; i<n; i++){
        if(mp.count(vt[i])){
            mp[vt[i]] = min(mp[vt[i]], cst[i]);
        }else{
            mp[vt[i]] = cst[i];
        }
    }
    ll cost = 0;
    ll mx = LONG_MIN;
    
    vec costing;
    for(auto vval: mp){
        costing.emplace_back(vval.second);
    }
    sort(all(costing));

    int i = 0;
    for(auto val:mp){
        cost += costing[i];
        ll vl = (c*(i+1)) - cost;
        mx = max(vl, mx);
        i++;
    }

    if(mx<=0) cout<<0<<nl;
    else cout<<mx<<nl;
}

signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}