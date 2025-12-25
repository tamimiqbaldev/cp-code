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

void solve() {
    //Code:
    int n;
    cin>>n;
    int b, f, r, v;
   int fst[3][10] = {};
   int scnd[3][10] = {};
   int thrd[3][10] = {};
   int fort[3][10] = {};
   for(int kk = 0; kk<n; kk++)
   {
       cin>>b>>f>>r>>v;
       if(b==1){
            fst[f-1][r-1] += v;
            
        }
        else if(b==2){
            scnd[f-1][r-1] += v;         
        }
        else if(b==3){
            thrd[f-1][r-1] += v; 
        }
        else if(b==4){
            fort[f-1][r-1] += v;
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++) cout<<" "<<fst[i][j];
        cout<<nl;
    }
    for(int k = 0; k<20; k++) cout<<"#";
    cout<<nl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++) cout<<" "<<scnd[i][j];
        cout<<nl;
    }
    for(int k = 0; k<20; k++) cout<<"#";
    cout<<nl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++) cout<<" "<<thrd[i][j];
        cout<<nl;
    }
    for(int k = 0; k<20; k++) cout<<"#";
    cout<<nl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++) cout<<" "<<fort[i][j];
        cout<<nl;
    }

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