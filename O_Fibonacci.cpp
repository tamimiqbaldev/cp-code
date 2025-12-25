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
// int n;
// vi v(10^9);//using pointer instead of Global Variable is better-Borson Sir 

ll fibonacci(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
void solve() {
   //Code:
    int n;
    cin>>n;
    cout<<fibonacci(n)<<nl;
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}