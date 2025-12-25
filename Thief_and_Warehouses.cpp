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
    int n; cin>>n;
    vi sacks(n);
    for(int i = 0; i < n; i++) cin>>sacks[i];

    ll mx = LONG_LONG_MIN;

    for(int i = 0; i<n; i++){
        int sck = sacks[i];
        for(int j = i; j<n; j++){
            sck = min(sck, sacks[j]);
            int len = j-i+1;
            
            mx = max(mx, (ll)len*sck);

        }
    }

    

    cout << mx << nl;
}

int main() {
    FAST_IO
    int t; cin >> t; while(t--) solve();
    return 0;
}