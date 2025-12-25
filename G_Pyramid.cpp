#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define flt double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>

void pyramid(int n, int barar_n){
    if(n > barar_n) return;
    
    for(int i = 1; i<=(barar_n-n); i++) cout<<" ";

    for(int i = 1; i<=((2*n)-1); i++) cout<<"*";
    cout<<nl;

    pyramid(n+1,  barar_n);
    
}

void solve() {
   //Code:
    int n; cin>>n;

    pyramid(1, n);
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}