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

bool isPrime(int n){
    if(n<=1) return false;

    for(int i = 2; i*i<=n; i++){
        if((n%i)==0) return false;
    }
    return true;
}

void solve() {
    int x,k; cin>>x>>k;
    
    if(k>1 && x>1) no;
    else if(k==1){
        (isPrime(x))? yes: no;
    }
    else{
        (k==2)? yes: no;
    }
}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}