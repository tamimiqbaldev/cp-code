#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define vi vector<int>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n;
    cin >> n;
    vi t(n), s(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    for (int i = 0; i < n; i++) cin >> s[i];

    vi chagol, og;
    for (int i = 0; i < n; i++) {
        if (t[i] == 0) chagol.emplace_back(s[i]);
        else og.emplace_back(s[i]);
    }

    sort(rall(chagol));
    sort(rall(og));

    int k = min(chagol.size(), og.size());

    int total = 0;
    for (int i = 0; i < k; i++) {
        total += 2 * chagol[i];
        total += 2 * og[i];
    }

    for (int i = k; i < chagol.size(); i++) total += chagol[i];
    for (int i = k; i < og.size(); i++) total += og[i];

    if (chagol.size() == og.size()) {
        int mn = min(chagol.back(), og.back());
        total -= mn;
    }

    cout << total << '\n';
}

signed main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

//my buggy version:
// #include <bits/stdc++.h>
// using namespace std;

// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
// #define nl '\n'
// #define int long long
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define pb emplace_back
// #define mp make_pair

// #define vi vector<int>
// #define vvi vector<vi>
// #define vvvi vector<vvi>
// template<typename T> using v = vector<T>;  

// #define forn(i, n) for(int i = 0; i < int(n); i++)
// //for(int i = 0; i<n; i++)
// // for(int i = 0; s[i]!='\0'; i++)


// void solve() {
//     //Code:
//     int n;
//     cin>>n;
//     vi type(n), stren(n);
//     int tm1= 0, tm2 = 0;
//     for(int i = 0; i<n; i++){
//         cin>>type[i];
//         if(type[i]==0) tm1++;
//         else tm2++;
//     }
//     for(int i = 0; i<n; i++) cin>>stren[i];
//     vi tm_1, tm_2;
//     int major = max(tm1, tm2);
//     int minor = min(tm1, tm2);
//     for(int i = 0; i<n; i++){
//         if(type[i]==0) tm_1.emplace_back(stren[i]);
//         else tm_2.emplace_back(stren[i]);
//     }
//     sort(rall(tm_1));
//     sort(rall(tm_2));

//     int total = 0; 
//     if(minor == tm1){
//         for(int i = 0; i<tm_1.size(); i++){
//             total+=tm_1[i];
//         }
//     }
//     else{
//         for(int i = 0; i<tm_2.size(); i++){
//             total+=tm_2[i];
//         }
//     }

//     int limu = 2*minor - 1;
//     if(major == tm1){
//         if(limu>=tm_1.size()){
//             for(int i = 0; i<tm_1.size(); i++){
//                 total+=tm_1[i];
//             }
//         }
//         else{
//             for(int i = 0; i<limu; i++){
//                 total+=tm_1[i];
//             }
//         }
//     }
//     else{
//         if(limu>=tm_2.size())
//         {
//             for(int i = 0; i<tm_2.size(); i++){
//                 total+=tm_2[i];
//             }
//         }
//         else{
//             for(int i = 0; i<limu; i++){
//                 total+=tm_2[i];
//             }
//         }
//     }   
//     if(major == minor){
//         if(tm1==minor) cout<<2*total-tm_1[tm_1.size()-1];
//         else cout<<2*total-tm_2[tm_2.size()-1];
//         return;
//     }
//     cout<<2*total<<nl;   
// }

// signed main() {
//     FAST_IO
//     int t;
//     // t = 1; 
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
