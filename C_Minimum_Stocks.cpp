#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define ul unsigned long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend() 
// #define mp make_pair 
#define mpi map<int, int>
#define mps map<string, int>
#define vec vector<int>
#define sett set<int>
#define queue<int>que
#define deque<int> dq
#define priority_queue<int> pq //descending priority queue.
#define priority_queue<int, vector<int>, greater<int>> apq //ascending priority queue
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
// #define no cout<<"NO\n"



void solve() {
    int cmd; cin>>cmd;
    mps mp;
    while(cmd--){
        int no; cin>>no;
        if(no==1 || no==2){
            string s; int prc; cin>>s>>prc;
            if(no == 1){
                mp[s] = prc;
            }
            else{
                int mn = min(mp[s], prc);
                mp[s] = mn;
            }
        }
        else{
            string s; cin>>s;
        }
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}