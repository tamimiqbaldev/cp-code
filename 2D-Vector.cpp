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
#define spc " "
// vec dp(1e8, -1);//1e8 is the maxmm vector size for integer datatype.

void solve(){
    vector<int>v;
    vector<vector<int>>vv(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vv[0].push_back(1);
    vv[1].push_back(2);
    vv[1].push_back(10);
    vv[2].push_back(3);

    for(auto &val:v) cout<<val<<" ";
    cout<<endl<<endl;

    for(auto x:vv){
        for(auto val:x){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
signed main(){
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}