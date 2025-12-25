#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
      int a, b;
      cin>>a>>b;
      int df = abs(a-b);
      if(df == 0) cout<<0<<endl;
      else{
        int mv = df/10;
        if(df%10 > 0) cout<<mv+1<<endl;
        else cout<<mv<<endl;
      }
    }
}