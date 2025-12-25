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

int n, a[105];
vi res;

void subsequence(int index){
    if(index>n){
        for(int i = 0; i<res.size(); i++) cout<<res[i]<<" ";
        cout<<nl;
        return;
    }
    subsequence(index+1);//skip/Excluding current item.

    
    //Now from here including current item.
    res.push_back(a[index]);//taking 
    subsequence(index+1);//printing the taken in the base case
    res.pop_back();//clearing the taken of that path.>>>backtrack
}


void solve(){
    cin>>n;
    for(int i = 1; i<=n; i++) cin>>a[i];
    subsequence(1);
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}