
#include <bits/stdc++.h>
using namespace std;
#define Ajkeo_Mara_Khamu_Bara ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ull unsigned long long
#define flt long double
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sum(x) accumulate(all(x), 0LL)
#define maxx(x) *max_element(all(x))
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
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define rrep(i,a,b) for(int i=(a);i>=(b);--i)
#define each(x,a) for(auto &x : a)
#define size(x) (int)(x).size()
#define gcd __gcd
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define mod 1000000007//1e9+7
#define modn(x) (((x)%mod+mod)%mod)
const int octroi = 1e7; 
// vector<int> dp(octroi, -1); 
// bitset<octroi> vc;

void solve(){
    ll n, k; cin>>n>>k;
    vector<tuple<int, int, int>>vtp;
    rep(i, 0, n){
        int l, h, c; cin>>l>>h>>c;
        vtp.push_back({l, h, c});
    }

    sort(all(vtp));

    int mx = k;
    for(auto val:vtp){
        int low = get<0>(val);
        int high = get<1>(val);
        int coin = get<2>(val);

        if(mx>=low && mx<=high){
            mx = max(mx, coin);
        }else if(mx>low && mx>high){
            mx = max(mx, coin);
        }else if(mx<low){
            break;
        }
    }
    cout<<mx<<nl;
}
signed main(){
    Ajkeo_Mara_Khamu_Bara
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}