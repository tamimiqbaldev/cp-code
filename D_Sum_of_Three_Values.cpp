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
#define vec vector<int>
#define sett set<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int n; ll sm; cin>>n>>sm;

    unordered_map<ll, int>mp;
    vec v(n);

    for(int i = 0; i<n; i++){
        cin>>v[i];
        mp[v[i]] = i;
    }

    for(int j = 0; j<n-1; j++){
        for(int k = j+1; k<n; k++){
            ll cm = sm-(v[j] + v[k]);
            // if(cm<0) continue;
            if(mp.count(cm) && mp[cm]!= j && mp[cm] != k){
                cout<<j+1<<" "<<k+1<<" "<<mp[cm]+1<<nl; return;
            }
        }
    }

    cout<<"IMPOSSIBLE\n";
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}