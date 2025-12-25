#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end() 
#define pb push_back 
#define mp make_pair 

// Shorter vector aliases
#define vi vector<int>
#define vvi vector<vector<int>>
template<typename T> using V = vector<T>;  // More generic version

void solve() {
   //code start here
   int n;
   cin>>n;
   int sm = (n*(n+1))/2;
   vi v(n-1);
   int sum = 0;
   for(int i = 0; i<n-1; i++){
    cin>>v[i];
    sum+=v[i];
   }
   cout<<sm-sum<<nl;


//    sort(all(v));

//    if(v[0]!=1){
//        cout<<1<<nl;
//        return;
//    }
//    else if(v[n-2]!=n){
//        cout<<n<<nl;
//        return;
//    }
//    for(int j = 1; j<n-1; j++){
//         if(v[j]-v[j-1]>1){
//             cout<<v[j]-1<<nl;
//             return;
//         }
//    }

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