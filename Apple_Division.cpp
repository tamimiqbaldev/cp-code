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

int n, a[21];

ll cal(int idx, ll amarkache, ll bondurkache){
    if(idx>n){
        return abs(amarkache-bondurkache);
    }

    ll aminilam = cal(idx+1, amarkache + a[idx], bondurkache);//ami nici

    ll bondunilo = cal(idx+1, amarkache, bondurkache+a[idx]);

    return min(aminilam, bondunilo);
}

void solve(){
    cin>>n;
    for(int i = 1; i<=n; i++) cin>>a[i];

    ll ans = cal(1, 0, 0);
    cout<<ans<<nl;
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}