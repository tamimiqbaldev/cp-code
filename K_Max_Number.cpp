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

int maxx(vi &v, int n){
    if(n==1) return v[0];
    return max(v[n-1], maxx(v, n-1));
}
void solve() {
   //Code:
    int n;
    cin>>n;
    vi v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    cout<<maxx(v, n);
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}