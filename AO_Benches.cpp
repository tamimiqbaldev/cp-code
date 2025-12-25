// #include <bits/stdc++.h>
// using namespace std;
// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
// #define nl '\n'
// #define ll long long
// #define ul unsigned long long
// #define flt long double
// #define psbk push_back
// #define psfr push_front
// #define ppbk pop_back
// #define ppfr pop_front
// #define all(x) (x).begin(), (x).end() 
// #define rall(x) (x).rbegin(), (x).rend() 
// #define mkpr make_pair 
// #define mpi map<int, int>
// #define mps map<string, int>
// #define sett set<int>
// #define que queue<int>
// #define dque deque<int>
// #define vec vector<int>
// #define prque priority_queue<int>  
// #define aprque priority_queue<int, vector<int>, greater<int>>  
// #define vvec vector<vector<int>>
// #define yes cout<<"YES\n"
// #define no cout<<"NO\n"
// #define octroi 1e9+7


// void solve(){
//     int bnch, amn;
//     cin>>bnch>>amn;
//     vec v(bnch);
//     int mx = INT_MIN;
//     for(int &x:v){
//         cin>>x;
//         mx = max(x, mx);
//     }
//     double distr = ceil((amn*1.0)/bnch);
    
    
//     cout<<mx+distr<<" "<<mx + amn<<nl;
// }

// signed main(){
//     FAST_IO 
//     // int t; cin>>t; while(t--)
//         solve();
   
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int mx = INT_MIN, sum = 0;

    for (double i = 0; i < n; ++i) {
        cin >> a[i];
        mx = max(mx, a[i]);
        sum += a[i];
    }

    // Binary search for minimum possible k
    double low = mx, high = mx + m;
    double min_k = high;

    while (low <= high) {
        double mid = (low + high) / 2;
        double need = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] < mid)
                need += (mid - a[i]);
        }

        if (need <= m) {
            min_k = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    int max_k = mx + m;
    cout << min_k << " " << max_k << '\n';
}

int main(){
    FAST_IO
    solve();
    return 0;
}
