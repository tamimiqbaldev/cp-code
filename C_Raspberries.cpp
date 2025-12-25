#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ull unsigned long long
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
#define seti set<int>
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
    int n, div;
    cin>>n>>div;

    vec v(n);
    for(auto &val:v) cin>>val;

    int mn = INT_MAX;

    int evn = 0;
    for(int i = 0; i<n; i++){
        if((v[i]%2)==0) evn++;

        if((v[i]%div)==0){
            cout<<0<<nl;
            return;
        }else{
            mn = min(mn, (div-(v[i]%div)));
        }
    }
    if(div==4){
        if(evn>1) cout<<0<<nl;
        else if(evn==1) cout<<1<<nl;
        else cout<<min(mn, 2)<<nl;
    }else{
        cout<<mn<<nl;
    }
}
signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}