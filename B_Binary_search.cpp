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



void solve() {
    int n, qr; cin>>n>>qr;
    vec v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    while(qr--){
        int x; cin>>x;
        int lf = 0, r = n-1;
        bool ace = false;
        int idx;
        while(lf<=r){
            int md = (lf+r)/2;
            if(v[md]==x){
                idx = md;
                ace = true;
                r = md - 1;
            }
            if(x<v[md]){
                r = md-1;
            }
            else if(x>v[md]){
                lf = md+1;
            }
        }
        if(!ace){
            cout<<"-1\n";
        }
        else cout<<idx<<nl;
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}