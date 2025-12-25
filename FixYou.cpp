#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, n, m;
    char x;

    cin>>t;

    while(t--){
        cin>>n>>m;
        int cnt = 0;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                cin>>x;
                if(j==m&&x=='R') cnt++;
                if(i==n && x=='D') cnt++;
            }
        }
        cout<<cnt<<endl;
    }
      
}