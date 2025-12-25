//issue with optimization for large value

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>

void solve() {
    int n, x; cin>>n>>x;

    vi v(n), old(n);
    for(int i= 0 ;i<n; i++){
        cin>>v[i];
        old[i] = v[i];
    }
    sort(all(v));
    int idx1, idx2;
    for(int i = 0; i<n; i++){
        idx1 = i;
        x -= old[i];

        int lw = 0, hgh = n-1;

        bool payci = false;
        while(lw<=hgh){
            int md = (lw+hgh)/2;

            if(v[md] == x){
                payci = true;
            }
            if(v[md]<x){
                lw = md+1;
            }
            else hgh = md - 1;
        }
        if(payci){
            for(int i = 0; i<n; i++){
                if(x == old[i]){
                    idx2 = i;
                }
            }
            cout<<idx1<<" "<<idx2;
        }
    }

    // for(int i = 0; i<n-1; i++){
    //     for(int j = i+1; j<n; j++){
    //         if(v[i]+v[j]==x){
    //             cout<<i+1<<" "<<j+1<<nl;
    //             break;
    //         }
    //     }
    // }

}

signed main() {
    FAST_IO 
        solve();
   
    return 0;
}