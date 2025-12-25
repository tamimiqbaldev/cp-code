#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ull unsigned long long
#define flt long double
#define psbk push_back
#define psfr push_front
#define ppbk pop_back
#define ppfr pop_front
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend() 
#define mkpr make_pair 
#define mpi map<int, int>
#define mps map<string, int>
#define seti set<int>
#define que queue<int>
#define dque deque<int>
#define vec vector<int>
#define prque priority_queue<int>  
#define aprque priority_queue<int, vector<int>, greater<int>>  
#define vvec vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define n 9*1e6
#define spc " "

vector<int>vc;

void Sieve(){
        vector<bool>v(n+1, 0);

        v[1] = 1;//not prime

        for(int i = 2; i<=n; i++){
            if(v[i]) continue;
            for(int j = i+i; j<=n; j+=i){
                v[j] = 1;
            }
        }
        for(int i = 1; i<=n; i++){
            if(v[i]==0) vc.push_back(i);
        }
}


signed main(){
    FAST_IO 
    Sieve();
    int N; cin>>N;
    cout<<vc[N-1]<<endl;
    return 0;
}