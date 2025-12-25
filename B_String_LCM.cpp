#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

ll lcm(int a, int b){
    int aa = a, bb = b;
    if(b>a) swap(a, b);
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    int gcd = a;
    return (aa*bb)/gcd;
}

void solve() {
    string s, t; cin>>s>>t;
    int sz = s.size(), tz = t.size();
    int lc = lcm(sz, tz);

   string ss = "", tt = "";

   while(1){
       if(ss.size()==lc) break;
        ss+=s;
   }
   while(1){
       if(tt.size()==lc) break;
        tt+=t;
   }
   if(ss==tt) cout<<ss<<nl;
   else cout<<-1<<nl;


}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}