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
    int rw, cl;
    cin>>rw>>cl;
    int ar[rw][cl];

    for(int i = 0; i<rw; i++){
        for(int j = 0; j<cl; j++){
            cin>>ar[i][j];
        }
    }
    
    int qr; cin>>qr;

    while(qr--){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        ll ans = 0;
        for(int i = x1-1; i<=(x2-1); i++){
            for(int j = (y1-1); j<=(y2-1); j++){
                ans |= ar[i][j];
            }
        }
        cout<<ans<<nl;
    }
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}