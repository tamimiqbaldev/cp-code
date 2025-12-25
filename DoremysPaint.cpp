#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

void solve() {
    //My solution logic here
    int n;
    cin>>n;
    int a[n];
    map<int, int>mp;
    for(int i = 0; i<n; i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    if(n<3) cout<<"YES\n";
    else{
        if(mp.size()==1) cout<<"YES\n";
        else if(mp.size()==2){
            auto it = mp.begin();
            int fst = it->second;
            int scnd = (++it)->second;
            if(fst==n/2 || scnd == n/2) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }

}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
