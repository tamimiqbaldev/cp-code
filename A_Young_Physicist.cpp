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
// int n;
// vi v(10^9);//using pointer instead of Global Variable is better-Borson Sir 


void solve() {
   //Code:
    int n; cin>>n;
    int arr[n][3];
    int sx = 0, sy = 0, sz = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
            if(j==0) sx+=arr[i][j];
            else if(j==1) sy+=arr[i][j];
            if(j==2) sz+=arr[i][j];
        }
    }
    if(sx == 0 && sy == 0 && sz == 0) yes;
    else no;

}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}