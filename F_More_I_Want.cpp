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
    int n; cin>>n;
    vec v(n+1), pfx(n+1), sfx(n+2);
    // for(auto &val:v) cin>>val;
    rep(i, 1, n+1) cin>>v[i];

    rep(i, 1, n+1){
        pfx[i] = gcd(pfx[i-1], v[i]);
    }

    rrep(i, n, 1){
        sfx[i] = gcd(sfx[i+1], v[i]);
    }


    ll mx = LLONG_MIN;
    rep(i, 1, n+1){
        ll val = gcd(pfx[i-1], sfx[i+1]);
        mx = max(mx, val);
    }
    cout<<mx<<nl;
    
    
}
signed main(){
    Ajkeo_Mara_Khamu_Bara
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     return b == 0 ? a : gcd(b, a % b);
// }

// int main() {
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];

//     vector<int> prefix_gcd(n + 2), suffix_gcd(n + 2);

//     for (int i = 1; i <= n; i++) {
//         prefix_gcd[i] = gcd(prefix_gcd[i - 1], a[i - 1]);
//     }
//     for (int i = n; i >= 1; i--) {
//         suffix_gcd[i] = gcd(suffix_gcd[i + 1], a[i - 1]);
//     }

//     int max_gcd = 0;
//     for (int i=1; i<=n; i++) {
//         int current_gcd = gcd(prefix_gcd[i - 1], suffix_gcd[i + 1]);
//         max_gcd = max(max_gcd, current_gcd);
//     }

//     cout<<max_gcd<<endl;
//     return 0;
// }
