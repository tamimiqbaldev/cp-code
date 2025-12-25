#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k;
    cin>>n>>k;
    map<int, int>mp;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int od = 0;
    for(int i = 1; i<=k; i++){
        if(mp[i]&1) od++;
    }
    cout<<n-(od/2)<<endl;
}