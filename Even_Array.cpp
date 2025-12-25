#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, od = 0, evn = 0;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n; i++){
           cin>>v[i];
           if(v[i]%2!=i%2){
            if(v[i]&1) od++;
            else evn++;
           }
        }
        if(od==evn) cout<<od<<endl;
        else cout<<-1<<endl;        
    }

}