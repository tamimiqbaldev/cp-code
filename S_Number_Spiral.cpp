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

#define forn(i, n) for(int i = 0; i < int(n); i++)
//for(int i = 0; i<n; i++)
// for(int i = 0; s[i]!='\0'; i++)


// void solve() {
//    //Code:
//    int row, col; 
//    cin>>row>>col;
//    if(row==col) cout<<(row*col)-(row-1)<<nl;
//    else if(row>col) cout<<(row*row)-(row-1)+(row-col)<<nl;
// //    else
// }

void solve() {
    int row, col; 
    cin >> row >> col;
    int n = max(row, col);
    int outta;
    if (n % 2 == 0) {
        if (row == n)
            outta = n * n - (col - 1);
        else
            outta = (n - 1)*(n - 1) + row;
    } else {
        if (col == n)
            outta = n * n - (row - 1);
        else
            outta = (n - 1)*(n - 1) + col;
    }
    cout << outta << nl;
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