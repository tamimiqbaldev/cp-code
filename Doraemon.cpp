#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;

    int mv = (n+1)/2;

    while(mv%m) mv++;
    if(mv<=n) cout<<mv<<endl;
    else cout<<-1<<endl;
}