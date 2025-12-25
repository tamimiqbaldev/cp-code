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
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int n; cin>>n; 
    vi v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    int m;  cin>>m;
    set<int>st;
    for(int i = 0; i<m; i++){
        int x; cin>>x;
        st.insert(x);
    }

    vi noya;

    for(int j = 0; j<n; j++){
        if(st.find(v[j])==st.end()){
            // cout<<v[j]<<" ";
            noya.push_back(v[j]);
        }
    }

    cout<<noya.size()<<nl;
    for(int k = 0; k<noya.size(); k++) cout<<noya[k]<<" ";

    cout<<nl;
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}