#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

void solve() {
    //My solution logic here
    int n;
    cin>>n;
    vector<int>a(n), b(n, 1);
    map<int, int>mp;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(n<=3) cout<<-1<<nl;
    else{
        bool bal = false;
        int cnt = 0;
        for(auto it : mp){
            if(it.second > 2) {
                bal = true;
                cnt++;
            }
        }
        if(cnt<2) cout<<-1<<nl;
        else cout<<"YES\n";
    }
}

int main() {
    int t;
    //t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
