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

// void solve(){
//     int n; cin>>n;
//     vec v(n);
//     for(auto &val:v) cin>>val;
    
//     ll ans = 0;
//     rep(i, 0, n-1){
//         ans ^= v[i];
//         rep(j, i+1, i+2){
//             ans ^= (v[i]);
//         }
//     }
//     cout<<ans<<nl;
// }
void solve() {
    int n;
    cin >>n;
    vector<int>a(n), prefix(n+1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefix[i+1] = prefix[i]^a[i];
    }

    long long total = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            total += prefix[j+1]^prefix[i];
        }
    }
    cout << total << '\n';
}
signed main(){
    Ajkeo_Mara_Khamu_Bara
    // int t; cin>>t; while(t--)
        solve();
    
    return 0;
}