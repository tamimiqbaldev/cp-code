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
//     int ar[3][3];
//     ll price = 0;
//     for(int i = 0; i<3; i++){
//         ll sm = 0;
//         for(int j = 0; j<3; j++){
//             cin>>ar[i][j];
//             sm += ar[i][j];
//         }
//         price += abs(15-sm);
//     }
//     cout<<price<<nl;
// }

// signed main(){
//     FAST_IO 
//     // int t; cin>>t; while(t--)
//         solve();
   
//     return 0;
// }

//GPT:
#include <bits/stdc++.h>
using namespace std;

int formingMagicSquare(vector<vector<int>> s) {
    vector<vector<vector<int>>> magicSquares = {
        {{8,1,6},{3,5,7},{4,9,2}},
        {{6,1,8},{7,5,3},{2,9,4}},
        {{4,9,2},{3,5,7},{8,1,6}},
        {{2,9,4},{7,5,3},{6,1,8}},
        {{8,3,4},{1,5,9},{6,7,2}},
        {{4,3,8},{9,5,1},{2,7,6}},
        {{6,7,2},{1,5,9},{8,3,4}},
        {{2,7,6},{9,5,1},{4,3,8}}
    };
    
    int minCost = INT_MAX;
    for (auto& magic : magicSquares) {
        int cost = 0;
        for (int i=0; i<3; ++i) {
            for (int j=0; j<3; ++j) {
                cost += abs(s[i][j] - magic[i][j]);
            }
        }
        minCost = min(minCost, cost);
    }
    return minCost;
}

int main() {
    vector<vector<int>> s(3, vector<int>(3));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> s[i][j];

    cout << formingMagicSquare(s) << '\n';
    return 0;
}


