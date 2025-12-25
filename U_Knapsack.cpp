#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
#define nl '\n'
#define ll long long
#define flt double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int N, W;
int item_weight[21], item_val[21];

int cal(int idx, int bakiache){
    if(idx>N) return 0;

    int ans = cal(idx+1, bakiache);

    if(bakiache>=item_weight[idx]) 
        ans = max(ans, cal(idx+1, bakiache-item_weight[idx]) + item_val[idx]);

    return ans;
}

void solve(){
    cin>>N>>W;
    for(int i = 1; i<=N; i++) cin>>item_weight[i]>>item_val[i];
    cout<<cal(1, W)<<nl;
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}