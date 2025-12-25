#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, i = 0;
    cin>>n>>x;
    int N[100], X[100];
    while(n>0 || x>0){
        N[i]=n%10;
        X[i]=x%10;
        i++;
        n/=10;
        x/=10;
    }
    for(int j = i-1; j>=0; j--){
        if(N[j]!=X[j]) cout<<1;
        else cout<<0;
    }
    cout<<"\n";

}