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
    int n, qr; cin>>n>>qr;
    multiset<int>mst;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        mst.insert(x);
    }
    while(qr--){
        int x; cin>>x;
        if(x==0){
            int y;
            cin>>y;
            mst.insert(y);
        }
        else if(x==1){
            auto it = mst.begin();
            cout<<*it<<nl;
            mst.erase(it);
        }
        else{
            auto it = prev(mst.end());
            cout<<*it<<nl;
            mst.erase(it);
        }
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}