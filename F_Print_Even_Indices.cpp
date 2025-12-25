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

void indices(vi &v, int n){
    if(n<0) return;

    if((n&1)==0){
        cout<<v[n]<<" ";
    }

    indices(v, n-1);
}

void solve() {
   //Code:
    int n; cin>>n;

    vi v(n);
    for(int i  = 0; i<n; i++) cin>>v[i];

    indices(v, n-1);
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}