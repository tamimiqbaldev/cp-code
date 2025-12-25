#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end() 
#define pb push_back 
#define mp make_pair 

void solve() {
    // Solution
    int y, k, n;
    cin>>y>>k>>n;
    bool bula = true;
    for(int i = 1, ye_boy = n-y; i<=ye_boy; i++){
        if((i+y)%k==0){
            bula = false;
            cout<<i<<" ";
        }
    }
    if(bula) cout<<-1<<nl;
}

signed main() {
    FAST_IO 
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}