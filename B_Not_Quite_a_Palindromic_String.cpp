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
    int sz, pr; cin>>sz>>pr;
    vec v(2);
    string s; cin>>s;

    for(auto &c:s){
        v[c-'0']++;
    }


    int mnpr = max(v[0], v[1]) - sz/2;
    int mxpr = v[0]/2 + v[1]/2;

    if(pr>=mnpr && pr<=mxpr && (pr-mnpr)%2==0) yes;
    else no;
}
signed main(){
    Ajkeo_Mara_Khamu_Bara
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}