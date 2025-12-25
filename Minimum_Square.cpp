#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(b>a) swap(a,b);
        //b<a
        if(2*b>a) cout<<pow((2*b),2)<<endl;
        else cout<<pow(a,2)<<endl;
    }

}