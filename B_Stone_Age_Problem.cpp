#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define ul unsigned long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend() 
// #define mp make_pair 
#define mpi map<int, int>
#define mps map<string, int>
#define vec vector<int>
#define sett set<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int ln, qr;
    cin>>ln>>qr;

    vec v(ln);

    unsigned long long sm = 0;
    for(int i = 0; i<ln; i++){
        cin>>v[i];
        sm += v[i];
    }

    while(qr--){
        int n; cin>>n;
        if(n==1){
            int idx, val; cin>>idx>>val;
            sm -= v[idx-1];
            v[idx-1] = val;
            sm += v[idx-1];
            cout<<sm<<nl;
        }
        else{
            int rvl; cin>>rvl;
            for(int i = 0; i<ln; i++) v[i] = rvl;
            sm = rvl*ln;
            cout<<sm<<nl;
        }
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}