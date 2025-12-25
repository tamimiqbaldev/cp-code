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

bool fillup(int maxcontainer, vec &v, int containernumber){
    int vsz = v.size();
    int vslindx = 0;
    for(int i = 0; i<containernumber; i++){
        int container_size_available = maxcontainer;
        while(vslindx<vsz && v[vslindx]<=container_size_available){
        //optimally ensuring vsl is available and each for each vsl size our container is larger or equal to the vsl size
            container_size_available -= v[vslindx];  // BUG FIX: Changed v[i] to v[vslindx]
            vslindx++;
        }
    }
    if(vslindx == vsz){
        return true;
    }else return false;
}


void solve(){
    int vsl, cont;
    cin>>vsl>>cont;
    vec vesl(vsl);

    ll sm = 0, mx = LLONG_MIN;
    for(auto &val:vesl){
        cin>>val;
        mx = max(mx, (ll)val);
        sm += val;
    }
    ll ans = mx;
    int l = mx, r = sm;

    while(l<=r){
        int md = (l+(r-l))/2;
        if(fillup(md, vesl, cont)){
            ans = md;
            r = md - 1;
        }else{
            l = md + 1;
        }
    }
    cout<<ans<<nl;

}
signed main(){
    FAST_IO 
    int m = 0;
    int t; cin>>t; while(t--){
        cout<<"Case "<<++m<<": ";
        solve();
    }
   
    return 0;
}