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
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define NN 24902280+10
#define spc " "

vector<bool>v(NN+1, 0);

ll primewithcount(int n)
{
    vector<pair<int,int>>p;
    for(int i=2;i<=sqrt(n);i++)
    {
         if(n%i==0)
         {
             int cnt=0;
             while(n%i==0)
             {
                 n/=i;
                 cnt++;
             }
             p.push_back({i,cnt});
         }
    }
    if(n!=1) p.push_back({n,1});

    ll SOD=1;
    for(auto [pp,cnt]:p)
    {
        int res=(pow(pp,cnt+1)-1)/(pp-1);
        SOD*=res;
    }
    return SOD;
}

void Sieve(){
        v[1] = 1;//not prime

        for(int i = 2; i<=NN; i++){
            if(v[i]) continue;
            for(int j = i+i; j<=NN; j+=i){
                v[j] = 1;
            }
        }
}


int main(){
    FAST_IO 
    Sieve();
    int t;
    cin>>t;
    while(t--){
        int N; cin>>N;
        ll sod = primewithcount(N);
    
        (v[sod]==0)?yes:no;
        // cout<<sod<<endl;
    }
    return 0;
}