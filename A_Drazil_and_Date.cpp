#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
void solve() {
    int a, b, s; cin>>a>>b>>s;
    long long sm = abs(a)+abs(b);
    if(s>=sm){
        int rm = s-sm;
        if(rm&1){
            no;
            return;
        }
        else{
            yes;
            return;
        }
    }
    else no;
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}