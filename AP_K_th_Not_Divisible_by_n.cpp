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
#define octroi LLONG_MAX


void solve(){
    int n, k; cin>>n>>k;
    
    ll l = 1, r = octroi;
    ll ans = 0;
    while(l<=r){
        ll mid = (l+r)/2;
        ll not_divisible_num = mid - (mid/n);
        if(not_divisible_num >= k){
            ans = mid;
            r = mid-1;
        }else{
            l = mid + 1; 
        }
    }
    cout<<ans<<nl;
}

signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}