#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ull unsigned long long
#define flt long double
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sum(x) accumulate(all(x), 0LL)
#define mpi map<int, int>
#define mps map<string, int>
#define seti set<int>
#define que queue<int>
#define dque deque<int>
#define prque priority_queue<int>  
#define aprque priority_queue<int, vector<int>, greater<int>>  
#define vec vector<ll>
#define vvec vector<vector<ll>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define spc " "
#define fro(i,a,b) for(int i=(a);i<(b);++i)
#define rfro(i,a,b) for(int i=(a);i>=(b);--i)
#define each(x,a) for(auto &x : a)
#define sz(x) (int)(x).size()
#define gcd __gcd
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define mod 1000000007
#define modn(x) (((x)%mod+mod)%mod)
const int MAXN = 1e7; 
vector<int> dp(MAXN, -1); 


void solve(){
    int n, h, m; cin>>n>>h>>m;
    //duration of sleep
    vector<pair<int, int>>vpr;
    while(n--){
        int ah, am; cin>>ah>>am;
        int dfm = 0, dfh = 0;
        if(h==ah && m==am){
            vpr.push_back({0, 0});
            continue;
        }
        if(ah>h){
            dfh = ah-h;
            if(am>m){
                dfm = am-m;
            }else{
                dfh--;
                dfm = (60-m) + am;
            }
        }else{
            dfh = (24-h) + ah;
            if(am>m){
                dfm = am-m;
            }else{
                dfh--;
                dfm = (60-m) + am;
            }
        }
        vpr.push_back({dfh, dfm});
    }
    sort(all(vpr));
    cout<<vpr[0].first<<" "<<vpr[0].second<<endl;
}
signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}


