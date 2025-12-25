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
    int n, q; cin>>n>>q;
    multiset<int>mst;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        mst.insert(x);
    }
    while(q--){
        int dk, fk; cin>>dk;
        if(dk==0){
            cin>>fk;
            mst.insert(fk);
        }
        else if(dk==1){
            auto bgn = mst.begin();//accessing index from beginning of multiset.
            cout<<*bgn<<nl;
            mst.erase(bgn);
            //erasing concept, giving just memory address if just wanna delete that value of that address not all the same values to be deleted
        }
        else if(dk==2){
            auto nd = prev(mst.end());//new concept
            cout<<*nd<<nl;
            mst.erase(nd);
        }

    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}