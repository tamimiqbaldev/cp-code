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


sett st;

void solve() {
    int n, elm; cin>>n>>elm;
    if(n==1){
        st.insert(elm);
    }
    else if((n==2) && (st.find(elm)!=st.end())){
        st.erase(elm);
    }
    else if(n==3){
        if(st.find(elm) != st.end()) cout<<"Yes\n";
        else cout<<"No\n";
    }
}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
        
    return 0;
}