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
        int lwr, hgr;
        cin>>lwr>>hgr;

        auto idl = lower_bound(all(v), lwr);
        auto idh = upper_bound(all(v), hgr);

        if(idl<=idh) cout<<idh-idl<<nl;
        else cout<<0<<nl;
    //     int idl, idh;

    //     int l = 0, r = n-1;
    //     while(l<=r){
    //         int md = (l+r)/2;
    //         if(v[md]>=lwr){
    //             idl = md;
    //             r = md-1;
    //         }
    //         else if(v[md]<lwr){
    //             l = md+1;
    //         }
    //     }

    //     l = 0, r = n-1;
    //     while(l<=r){
    //         int md = (l+r)/2;
    //         if(v[md]<=hgr){
    //             idh = md;
    //             l = md+1;
    //         }
    //         else if(v[md]>hgr){
    //             r = md-1;
    //         }
           
    //     }
    //     if(idl<=idh) cout<<(idh-idl)+1<<nl;
    //     else cout<<0<<nl;
    }
}

signed main() {
    FAST_IO 
    int x = 1;
    int t; cin>>t; while(t--){
        cout<<"Case "<<x<<":\n";
        solve();
        x++;
    }
   
    return 0;
}