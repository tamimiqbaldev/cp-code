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
#define que queue<int>
#define dq deque<int> 
#define pq priority_queue<int>  //descending priority queue.
#define apq priority_queue<int, vector<int>, greater<int>> //ascending priority queue
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
   int sz, cmd;
   cin>>sz>>cmd;
   dq dx;
   while(cmd--){
        string s; cin>>s;
        if(s=="pushLeft"){
            int n; cin>>n;
            int szz = dx.size();
            if(szz>=sz) cout<<"The queue is full\n";
            else{
                cout<<"Pushed in left: "<<n<<nl;
                dx.pf(n);
            }
        }
        else if(s=="pushRight"){
            int n; cin>>n;
            int szz = dx.size();
            if(szz>=sz) cout<<"The queue is full\n";
            else{
                cout<<"Pushed in right: "<<n<<nl;
                dx.pb(n);
            }
        }
        else if(s=="popLeft"){
            if(dx.empty()) cout<<"The queue is empty\n";
            else{
                cout<<"Popped from left: "<<dx.front()<<nl;
                dx.pop_front();
            }
        }
        else if(s=="popRight"){
            if(dx.empty()) cout<<"The queue is empty\n";
            else{
                cout<<"Popped from right: "<<dx.back()<<nl;
                dx.pop_back();
            }
        }

   }
}

signed main() {
    FAST_IO 
    int x = 1; 
    int t; cin>>t; while(t--){
        cout<<"Case "<< x << ":\n";
        solve();
        x++;
    }
   
    return 0;
}