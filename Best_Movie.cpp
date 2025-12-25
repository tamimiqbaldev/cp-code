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

void solve() {
    int n; cin>>n;
    set<int>st;
    int a, b;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        if(a>=7) st.insert(b);
    }
    if(st.size()==0){
        cout<<-1<<nl;
        return;
    }
    cout<<*(st.begin())<<nl;
    return;
}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}