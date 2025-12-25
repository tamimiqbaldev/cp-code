/*
It’s the same dawn — the one in which justice will arise with the fall of injustice and oppression.
Free Palestine, Uyghurs, Rohingyas, Sudan, Yemen, Iraq, Bosnia.
Fuck Israel. Fuck the Oppressors.
May the curse of my Lord be upon them, and may their destruction come sooner.
May Mankind Wins
*/
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
#define mod 1000000007
#define modn(x) (((x)%mod+mod)%mod)
const int MAXN = 1e7; 
vector<int> dp(MAXN, -1); 
bitset<MAXN> vc;

void solve(){
    int cw,qr; cin>>cw>>qr;
    vec on(cw+1), to(cw+1), tre(cw+1);
    rep(i, 1, cw+1){
        int val; cin>>val;
        if(val==1) on[i] = 1;
        else if(val==2) to[i] = 1;
        else tre[i] = 1;
    }
    vec pon(cw+1), pto(cw+1), ptre(cw+1);

    rep(i, 1, cw+1){
        pon[i] = pon[i-1] + on[i];
    }
    rep(i, 1, cw+1){
        pto[i] = pto[i-1] + to[i];
    }
    rep(i, 1, cw+1){
        ptre[i] = ptre[i-1] + tre[i];
    }
    while(qr--){
        int l, r; cin>>l>>r;
        cout<<pon[r]-pon[l-1]<<spc<<pto[r]-pto[l-1]<<spc<<ptre[r]-ptre[l-1]<<nl;
    }
}
signed main(){
    Ajkeo_Mara_Khamu_Bara
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}