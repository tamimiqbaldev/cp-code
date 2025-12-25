#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define flt double

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
//for(int i = 0; i<n; i++)
// for(int i = 0; s[i]!='\0'; i++)


// void solve() {
//    //Code:
//    int n;
//    cin>>n;
//    vi v(n);
//    for(int i = 0; i<n; i++){
//     v[i]=0;
//     cout<<0;
//    }
//    cout<<nl;

//    for(int i = 0; i<n; i++){
//     for(int j = i; j<n; j++){   
//         v[j]=1;
//         for(int k = 0; k<n; k++) cout<<v[k];
//         cout<<nl;
//         v[j] = 0;
//     }
//    }
//    for(int i = 0; i<n; i++) cout<<1;
//    cout<<nl;
// }
void solve() {
    int n;
    cin >> n;
    int total = 1 << n; 

    for (int i = 0; i < total; i++) {
        int gray = i ^ (i >> 1);
        
        for (int j = n - 1; j >= 0; j--) cout << ((gray >> j) & 1);
        cout << '\n';
    }
}

int main() {
    FAST_IO
    int t;
    t = 1; 
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
