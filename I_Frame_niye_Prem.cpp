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
    while(1){
        int h, w;
        cin>>h>>w;
        if(h==0 && w==0) break;
        for(int i = 0; i<h; i++){
            if(i==0 || i == h-1){
                for(int j = 0; j<w; j++){
                    cout<<"#";
                }
                cout<<nl;
            }
            else{
                for(int j = 0; j<w; j++){
                    if(j==0 || j==w-1) cout<<"#";
                    else cout<<".";
                }
                cout<<nl;
            }
        
        }
        cout<<nl;
    }
    
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