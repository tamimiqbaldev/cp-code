//In the name of Allah

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define Think_Like_Jack_Sparrow FAST_IO


// ------------------ [Type Aliases] ------------------
#define ll long long
#define ull unsigned long long
#define flt long double

// ------------------ [STL Macros] ------------------
#define VEC vector<ll>
#define VPR vector<pair<ll,ll>>
#define VVEC vector<vector<ll>>
#define MP map<ll, ll>
#define SET set<ll>
#define que queue<ll>
#define dque deque<ll>
#define prque priority_queue<ll>
#define aprque priority_queue<ll, vector<ll>, greater<ll>>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (ll)(x).size()
#define SUM(x) accumulate(all(x), 0LL)
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define STR_TOUPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define STR_TOLOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)

// ------------------ [Looping Macros] ------------------
#define rep(i,a,b) for(ll i=(a);i<(b);++i)
#define rrep(i,a,b) for(ll i=(a);i>=(b);--i)
#define each(x,a) for(auto &x : a)

// ------------------ [Math] ------------------
#define gcd __gcd
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define mod 1000000007 // 1e9+7
#define modn(x) (((x)%mod+mod)%mod)
#define ll_len(n) ((n) > 0 ? (int)floor(log10((long double)(n)) + 1) : 1)

// ------------------ [Output Helpers] ------------------
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'
#define spc " "

// ------------------ [Debugging] ------------------
#define dbg(x) cerr << #x << " = " << x << nl
#define printv(v) for(auto x : v) cerr << x << ' '; cerr << nl

// ------------------ [Constants & Globals] ------------------
const ll octroi = 1e7;
// vector<int> dp(octroi, -1); 
// bitset<octroi> vc;

bool Check(ll n){
    ll ck = 0;
    while(n){
        ll rem = n%10;
        if(rem){
            ck++;
        }
        n /= 10;
    }
    if(ck==1) return true;
    else return false;
}


void solve(){
    string s;
    cin>>s;
    if(sz(s)==1){
        cout<<s<<nl; return;
    }

    ll cn = 9;

    ll siz = sz(s) - 2;

    cn += (9*siz)+(s[0]-'0');

    cout<<cn<<nl;
}

signed main(){
    Think_Like_Jack_Sparrow
    int t; cin>>t; while(t--)
        solve();

    return 0;
}