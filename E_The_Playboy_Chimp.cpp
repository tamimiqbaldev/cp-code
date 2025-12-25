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
    int n; cin>>n;
    vec v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    int qr; cin>>qr;
    while(qr--){
        int x; cin>>x;
        int l = 0, r = n-1;
        int idxl, idxh;

        //immediate choto
        bool lolo = false, hoho = false;
        while(l<=r){
            int md = (l+r)/2;
            if(v[md]<x){
                idxl = md;
                lolo = true;
                l = md+1;
            }else if(v[md]>=x){
                r = md-1;
            }
        }

        //immediate boro
        l = 0;
        r = n-1;
        while(l<=r){
            int md = (l+r)/2;
            if(v[md]<=x){
                l = md+1;
            }else if(v[md]>x){
                idxh = md;
                hoho = true;
                r = md-1;
            }
        }
        if(lolo) cout<<v[idxl]<<" ";
        else cout<<"X ";
        if(hoho) cout<<v[idxh]<<nl;
        else cout<<"X\n";
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}