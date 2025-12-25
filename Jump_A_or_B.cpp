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
#define yes cout<<"Yes\n"
#define no cout<<"No\n"



void solve() {
    int n,m,a,b; cin>>n>>m>>a>>b;
    int nom = m - (n*b);
    int dom = a-b;

    if(nom%dom){
        no;
        return;
    }

    int x = nom/dom;

    if(x>=0 && x<=n){
        yes;
        return;
    }
    no; return;
}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}