/*
It’s the same dawn — the one in which justice will arise with the fall of injustice and oppression.
Free Palestine, Uyghurs, Rohingyas, Sudan, Yemen, Iraq, Bosnia.
Fuck Israel. Fuck the Oppressors.
May the curse of my Lord be upon them, and may their destruction come sooner.
May Mankind Win
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
#define vec vector<int>
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
    int n, k; cin>>n>>k;
    vec v(n+1);
    seti st;
    int mx = INT_MIN, imx = 0, idxmn = INT_MAX;
    rep(i, 1, n+1){
        cin>>v[i];
        mx = max(mx, v[i]);
    }

    if(v[k]==mx){
        yes; return;
    }

    vec x;
    rep(i, 1, n+1){
        if(v[i]>v[k]){
            x.push_back(v[i]);
        }
    }    
    sort(all(x));
    ll mmnt = 0;
    ll crnt = v[k];
    rep(i, 0, size(x)){
        mmnt += abs(crnt-x[i]);
        if(mmnt>crnt){
            no;return;
        }else{
            crnt = x[i];
        }
    }
    yes;
}
signed main(){
    Ajkeo_Mara_Khamu_Bara
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}