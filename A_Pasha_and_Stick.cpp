#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define flt double

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
//for(int i = 0; i<n; i++)
// for(int i = 0; s[i]!='\0'; i++)


void solve() {
   //Code:
    ll n;
    cin>>n;
    if(n<=4){
        cout<<0<<nl;
        return;
    }
    ll div = n/4;
    ll rm = n%4;
    if(rm){
        if(rm==2){
            cout<<div<<nl;
            return;
        }
        else{
            cout<<0<<nl;
            return;
        }
    }
    else cout<<div-1<<nl;
}

int main() {
    FAST_IO
    int t;
    t = 1; 
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}