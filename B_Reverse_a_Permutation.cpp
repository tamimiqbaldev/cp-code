/**
 * Bismillah
 * "The problem is not the problem. The problem is your attitude about the problem."
 *
 * THE BLACK PEARL CODEBASE
 * -------------------------------------------------------------
 * |  "Take what you can, give nothing back!"                  |
 * -------------------------------------------------------------
 */

#include <bits/stdc++.h>
using namespace std;

// [Navigating the Seas] 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define Think_Like_Jack_Sparrow FAST_IO

// [ The Pirate's Gold ] 
#define ll      long long
#define ull     unsigned long long
#define flt     long double

// [ Provisions & Cargo ]
#define VEC     vector<ll>
#define VPR     vector<pair<ll,ll>>
#define VVEC    vector<vector<ll>>
#define MP      map<ll, ll>
#define SET     set<ll>
#define que     queue<ll>
#define dque    deque<ll>
#define prque   priority_queue<ll>
#define aprque  priority_queue<ll, vector<ll>, greater<ll>>

#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x)   (ll)(x).size()

// [ Combat Maneuvers ] --------------------------------------
#define SUM(x)          accumulate(all(x), 0LL)
#define MAX(x)          *max_element(all(x))
#define MIN(x)          *min_element(all(x))
#define STR_TOUPPER(s)  transform(all(s), s.begin(), ::toupper)
#define STR_TOLOWER(s)  transform(all(s), s.begin(), ::tolower)
#define gcd             __gcd
#define lcm(a,b)        ((a)/gcd(a,b)*(b))
#define mod             1000000007
#define modn(x)         (((x)%mod+mod)%mod)
#define ll_len(n)       ((n) > 0 ? (int)floor(log10((long double)(n)) + 1) : 1)

// [ Constant Voyages ] 
#define rep(i,a,b)      for(ll i=(a);i<(b);++i)
#define rrep(i,a,b)     for(ll i=(a);i>=(b);--i)
#define each(x,a)       for(auto &x : a)

// [ Parlay ]
#define yes             cout<<"YES\n"
#define no              cout<<"NO\n"
#define nl              '\n'
#define spc             " "

// [ Dropping Anchor ] 
#define dbg(x)          cerr << "[DBG] " << #x << " = " << x << nl
#define printv(v)       for(auto x : v) cerr << x << ' '; cerr << nl

// [ Secret Map ] 
const ll octroi = 1e7;
// vector<int> dp(octroi, -1);
// bitset<octroi> vc;

// [ The Great Adventure ] ----------------------------------
void solve() {
    ll n; cin>>n;
    VEC v(n); MP mp;
    rep(i, 0, n){
        cin>>v[i];
        mp[v[i]] = i;
    }
    VEC vv = v;
    sort(rall(vv));

    ll suru, ses;
    bool elomelo = false;
    rep(i, 0, n){
        if(v[i] < vv[i]){
            elomelo = true;
            suru = i;
            ses = mp[vv[i]];
            break;
        }
    }
    // rep(i, 0, n) cout<<vv[i]<<spc; cout<<nl;
    // cout<<suru<<spc<<ses<<nl; return;
    if(elomelo){
        VEC ek, dui, tin;
        rep(i, 0, suru){
            ek.push_back(v[i]);
        }
    
        rep(i, suru, ses + 1){
            dui.push_back(v[i]);
        }
        reverse(all(dui));
    
        rep(k, ses+1, n){
            tin.push_back(v[k]);
        }
    
        if(sz(ek)){
            rep(i, 0, sz(ek)){
                cout<<ek[i]<<spc;
            }
        }
        if(sz(dui)){
            rep(i, 0, sz(dui)){
                cout<<dui[i]<<spc;
            }
        }
    
        if(sz(tin)){
            rep(i, 0, sz(tin)){
                cout<<tin[i]<<spc;
            }
        }
    }else{
        rep(i, 0, n){
            cout<<v[i]<<spc;
        }
    }

    cout<<nl;
}

// [ Black Pearl ] -------------------------------------------
signed main() {
    Think_Like_Jack_Sparrow

    int t; cin >> t; while(t--)
    solve();

    return 0;
}

// -------------------------------------------------------------
// You'll always be remembered, mate (Sorif Osman Bin Hady)
// -------------------------------------------------------------