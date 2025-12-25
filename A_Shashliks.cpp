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
#define octroi 1e9+7


void solve(){
    int k, a, b, x, y; cin>>k>>a>>b>>x>>y;

    if(k>a || k>b){
        if(k>a && x<y){
            ll m = ceil((k-a+1)/(x*1.0));
            ll n = 0;
            if(a>b){
                n = ceil((a-b+1)/(y*1.0));
            }
            cout<<m+n<<nl;
        }else if(k>a && y<x){
            if(k>b){
                
            }
        }else if(k>b && y<x){
            ll m = ceil((k-b+1)/(y*1.0));
            ll n = 0;
            if(b>a){
                n = ceil((b-a+1)/(y*1.0));
            }
            cout<<m+n<<nl;
        }
    }else{
        cout<<0<<nl;
    }
}

signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}