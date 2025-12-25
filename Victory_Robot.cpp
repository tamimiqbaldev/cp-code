#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
#define nl '\n'
#define ll long long
#define flt double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);


void solve(){
    ll n; cin>>n;
    if(n==1971){
        cout<<"Joy Bangla\n";
        return;
    }
    if(n&1){
        cout<<"Joy\n";
    }
    else cout<<"Bangla\n";
}

int main() {
    FAST_IO
    ll t; cin>>t; while(t--)
    solve();
    return 0;
}