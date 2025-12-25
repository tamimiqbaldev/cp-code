//this code is of DEEPSEEK, mine is under in comment:
#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end() 
#define pb push_back 
#define mp make_pair 

void solve(int n) {
    string s;
    cin >> s;
    int m = s.size() / n;  // Number of rows
    vector<vector<char>> grid(m, vector<char>(n));

    // Fill the grid
    int index = 0;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            // Left to right
            for (int j = 0; j < n; j++) {
                grid[i][j] = s[index++];
            }
        } else {
            // Right to left
            for (int j = n - 1; j >= 0; j--) {
                grid[i][j] = s[index++];
            }
        }
    }

    // Read the grid column-wise to get the original message
    string original_message;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            original_message += grid[i][j];
        }
    }

    cout << original_message << nl;
}

signed main() {
    FAST_IO
    while (1) {
        int t;
        cin >> t;
        if (t == 0) return 0;
        solve(t);
    }
}

//MINE code:
//My code got some logical error to resolve!
// #include <bits/stdc++.h>
// using namespace std;


// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
// #define nl '\n'
// #define int long long
// #define all(x) (x).begin(), (x).end() 
// #define pb push_back 
// #define mp make_pair 

// void solve(int n){
//     string s, x; 
//     cin>>s;
//     int m = s.size()/n;
//     for(int i = 0; i<n; i++){
//         for(int j = i; j<(m*n); ){
//             if(j&1){
//                 x+=s[j];
//                 j++;
//             }
//             else{
//                 x+=s[j];
//                 j+=(2*n-1-i);
//             }
//         }
//     }
//     cout<<x<<nl;
// }

// signed main() {
//     FAST_IO 
//     // int t;
//     // // t = 1;
//     // cin >> t; 
//     while (1) {
//         int t;
//         cin>>t;
//         if(t==0) return 0;
//         solve(t);
//     }
// }