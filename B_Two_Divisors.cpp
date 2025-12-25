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
#define rall(x) (x).rbegin(), (x).rend() 
// #define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define sett set<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

ll lcm(int a, int b){
    int xa = a, xb = b;
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return (xa*xb)/a;
}


void solve() {
    ll a, b;
    cin>>a>>b;
    if(b%a){
        cout<<lcm(a,b)<<nl;
    }
    else{
        cout<<(b*b)/a<<nl;
    }
}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}