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



void solve() {
    int n; cin>>n;
    vi v(n);
    int cno = 0, cnn = 1; 
    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(v[i]==0) cno++;
        else cnn++;
    }
    if(cno>(n-1) || cnn > (n-1)){
        yes;
        return;
    }
    no;
}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}