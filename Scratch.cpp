#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n, c; 
        cin>>n>>c;
        vector<int>v(n+1), vv(n+1);
        for(int i = 1; i<=n; i++){
            cin>>v[i];
            vv[i] = v[i];
        }
        sort(v.begin()+1, v.end());
        
    }
}