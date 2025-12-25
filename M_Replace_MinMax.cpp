/* This is the same dawn -- the one in which truth shall rise as falsehood falls. 
By the promise of my Almighty, oppression shall perish, and justice shall prevail.  
Free Palestine. Free the Uyghurs. Free the Rohingyas.  
Free Sudan, Yemen, Iraq, and every land where the blood of the innocent cries out.  

"They wish to extinguish the light of Allah with their mouths, 
but Allah will perfect His light -- even if the disbelievers hate it." -- Surah As-Saff (61:8)  

And say: "Truth has come and falsehood has vanished. Indeed, falsehood is bound to vanish." -- Surah Al-Isra (17:81)

May the curse of my Lord be upon the oppressors, the tyrants, and the usurpers of truth. 
May their plans be shattered as were those of Firaun, and their legacy buried like Aad and Thamud.  
We stand with our oppressed brothers and sisters -- not with slogans, but with conviction. 
Victory will surely come to those who stand firm upon the Haqq.  

"So bear beautiful patience. They see it far off, but We see it near." -- Surah Al-Ma'arij (70:5-7)  

May mankind rise with justice, and may falsehood vanish -- as it is always bound to. */

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define A_Fighting_Horse_Never_Dances_With_The_Wedding_Horse FAST_IO

// ------------------ [Type Aliases] ------------------
#define ll long long
#define ull unsigned long long
#define flt long double
#define VEC vector<ll>
#define VVEC vector<vector<ll>>
#define MP map<ll, ll>//Reminder: MAP potentially conflict on c++20+
#define SET set<ll>
#define que queue<ll>
#define dque deque<ll>
#define prque priority_queue<ll>
#define aprque priority_queue<ll, vector<ll>, greater<ll>>

// ------------------ [STL Macros] ------------------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define size(x) (ll)(x).size()
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


bool isPrime(ll x){
    if(x < 2) return false;
    for(ll i=2; i*i<=x; i++) if(x%i==0) return false;
    return true;
}

void solve(){
    ll T; cin>>T;

    vector<ll> primes;
    rep(i,2,101) if(isPrime(i)) primes.push_back(i);

    ll nextPrime[101];
    rep(i,1,101){
        ll nxt=i;
        for(ll p:primes){
            if(p>i){ nxt=p; break; }
        }
        if(nxt<=100) nextPrime[i]=nxt;
        else nextPrime[i]=i;
    }

    while(T--){
        ll m; cin>>m;
        vector<ll> board(101);
        rep(i,1,101) board[i]=i;

        rep(i,0,m){
            ll u,v; cin>>u>>v;
            board[u]=v;
        }
        ll n; cin>>n;
        rep(i,0,n){
            ll u,v; cin>>u>>v;
            board[u]=v;
        }
        ll rule6, rule1, rulePrime; cin>>rule6>>rule1>>rulePrime;
        ll pos1,pos2; cin>>pos1>>pos2;
        ll rolls; cin>>rolls;

        vector<ll> r1(rolls), r2(rolls);
        rep(i,0,rolls) cin>>r1[i];
        rep(i,0,rolls) cin>>r2[i];

        auto play=[&](ll start, vector<ll> rolls){
            ll p=start;
            for(ll d:rolls){
                ll newp=p+d;
                if(newp>100) continue;
                p=newp;

                while(board[p]!=p) p=board[p];

                if(rule6 && d==6) p=max(1LL,p-6);
                else if(rule1 && d==1) p=min(100LL,p+6);

                while(board[p]!=p) p=board[p];

                if(rulePrime && isPrime(p)){
                    ll np=nextPrime[p];
                    p=np;
                    while(board[p]!=p) p=board[p];
                }
            }
            return p;
        };

        ll p1=play(pos1,r1);
        ll p2=play(pos2,r2);

        if(p1==100 && p2==100) cout<<"Both player win"<<nl;
        else if(p1==p2) cout<<"Draw"<<nl;
        else if(p1>p2) cout<<"Thor wins by "<<(p1-p2)<<" points"<<nl;
        else cout<<"Hulk wins by "<<(p2-p1)<<" points"<<nl;
    }
}

signed main(){
    A_Fighting_Horse_Never_Dances_With_The_Wedding_Horse
    solve();
    return 0;
}
