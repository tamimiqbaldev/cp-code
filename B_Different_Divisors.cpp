/* This is the same dawn -- the one in which truth shall rise as falsehood will fall. 
By the promise of the Almighty, oppression shall perish, and justice shall prevail.  
Free Palestine. Free the Uyghurs. Free the Rohingyas.  
Free Sudan, Yemen, Iraq, and every land where the blood of the innocent cries out.  

"They wish to extinguish the light of Allah with their mouths, 
but Allah will perfect His light -- even if the disbelievers hate it." -- Surah As-Saff (61:8)  

And say: "Truth has come and falsehood has vanished. Indeed, falsehood is bound to vanish." -- Surah Al-Isra (17:81)

May the curse of Allah (SWT) be upon the oppressors, the tyrants, and the usurpers of truth. 
May their plans be shattered as were those of Firaun, and their legacy buried like Aad and Thamud.  
We stand with our oppressed brothers and sisters -- not with slogans, but with conviction. 
Victory will surely come to those who stand firm upon the Haqq.  

"So bear beautiful patience. They see it far off, but We see it near." -- Surah Al-Ma'arij (70:5-7)  

May mankind rise with justice, and may falsehood vanish -- as it is always bound to. */

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
#define MP map<ll, ll>//Reminder: MAP potentially conflict on c++20+
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

void solve(){
    ll d; cin>>d;

    ll a = 1;
    ll b = a + d;
    ll c = a + (2*d);

    ll e = lcm(b, c);

    // cout<<a<<spc<<b<<spc<<c<<spc<<e<<nl;

    cout<<e<<nl;
}

signed main(){
    Think_Like_Jack_Sparrow
    ll t; cin>>t; while(t--)
        solve();

    return 0;
}