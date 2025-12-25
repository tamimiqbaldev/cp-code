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

ll primedivisor(int n){
    int old = n;
    vector<pair<int, int>> pv;

    for(int i = 2; i*i<=n; i++){
        int cn = 0;
        if((n%i)==0){
            while(n%i==0){
                n/=i;
                cn++;
            }
            pv.push_back({i, cn});
        }
    }
    if(n!=1 && n!=old) pv.push_back({n, 1});

    ll SOD=1;
    for(auto [pp,cnt]:pv)
    {
        ll res=(pow(pp,cnt+1)-1)/(pp-1);
        SOD*=res;
    }
    return SOD;

}

void solve(){
    int n; cin>>n;
    cout<<primedivisor(n)<<endl;
}
signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}