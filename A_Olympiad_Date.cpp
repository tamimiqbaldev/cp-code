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
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n; i++) cin>>v[i];
    int cno = 0, cn1 = 0, cn2 = 0, cn3 = 0, cn5 = 0;
    bool bo = true;
    for(int j = 0; j<n; j++){
        if(v[j]==0) cno++;
        else if(v[j]==1) cn1++;
        else if(v[j]==2) cn2++;
        else if(v[j]==3) cn3++;
        else if(v[j]==5) cn5++;

        if(cno>=3 && cn1>=1 && cn2>=2 && cn3 >=1 && cn5 >= 1){
            cout<<j+1<<nl;
            bo = false;
            break;
        }
    }
    if(bo) cout<<0<<nl;
}

signed main() {
    FAST_IO 
    int t;
    // t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}