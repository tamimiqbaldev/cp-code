#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
template<typename T> using v = vector<T>;  

void solve() {
   //Code:
   int a[5][5];
   int idx, idy;
   for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                idx = i;
                idy = j;
            }
        }
    }
    cout<<abs(2-idx)+abs(2-idy)<<nl;
}

signed main() {
    FAST_IO
    int t;
    t = 1; 
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}