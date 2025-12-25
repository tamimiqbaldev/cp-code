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
#define mod 1000000007//1e9+7
#define modn(x) (((x)%mod+mod)%mod)
const int octroi = 1e7; 
vector<int> dp(octroi, -1); 
bitset<octroi> vc;

// void solve(){
//     int n; cin>>n;

//     map<int, int>mp;
//     vec vail;

//     ll sm = 0;
//     rep(i, 0 , n){
//         int val; cin>>val;
//         vail.push_back(val);
//         sm += val;
//         mp[val]++;
//     }
//     int mx = 0;
//     for(auto [u, v]:mp){
//         mx = max(mx, v);
//     }
//     ll day;
//     ll buy = 0;
//     for(auto [u, v]:mp){
//         if(v==mx){
//             day = u;
//             break;
//         }
//     }
//     int avail = 0;
//     for(auto val:vail){
//         avail += min(val, day);
//     }

//     // ll profit = 20*avail;
//     // cout<<profit<<nl;
//     cout<<day<<spc<<avail<<nl;
// }
void solve() {
    int n;
    cin >> n;
    vec a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    ll maxProfit = 0;
    for (int x = 0; x <= 100; ++x) {
        ll profit = 0;
        for (int i = 0; i < n; ++i) {
            profit += (min((ll)x, a[i]) * 20);
        }
        maxProfit = max(maxProfit, profit);
    }

    cout << maxProfit << '\n';
}
signed main(){
    Ajkeo_Mara_Khamu_Bara
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}