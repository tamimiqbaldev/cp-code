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


void solve() {
   //Code:
    int l, h;
    cin>>h>>l;
    flt rslt = ((pow(l,2))-(pow(h,2)))/(2*h);
    cout<<fixed<<rslt<<setprecision(13)<<nl;
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}