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
    int n, qr; cin>>n>>qr;
    int arr[n+1][n+1] = {0};
    int pfx[n+1][n+1] = {0};
    // vector<vector<int>>arr(n+1);
    rep(i, 1, n+1){
        rep(j, 1, n+1){
            char c; cin>>c;
            if(c=='.') arr[i][j] = 0;
            else arr[i][j] = 1;
            pfx[i][j] = arr[i][j] + pfx[i][j-1] + pfx[i-1][j] - pfx[i-1][j-1];
        }
    }

    while(qr--){
        int y1, x1, y2, x2; 
        // cin>>y1>>x1>>y2>>x2;
        cin>>x1>>y1>>x2>>y2;
        ll val = pfx[x2][y2]-pfx[x1-1][y2]-pfx[x2][y1-1]+pfx[x1-1][y1-1];
        cout<<val<<nl;
    }

}
signed main(){
    Ajkeo_Mara_Khamu_Bara
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}