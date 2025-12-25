#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cin>>n>>m;

    if(n==m){
        cout<<0<<endl;
        return 0; 
    }
    if(m%n){
        cout<<-1<<endl;
        return 0;
    }
    else{
        //2 3 2 3 3 2 2--> 432
        int r = m/n, cnt = 0;
        //M>N
        while(r%2==0){
            r/=2;
            cnt++;
        }
        while(r%3==0){
            r/=3;
            cnt++;
        }
        if(r==1) cout<<cnt<<endl;        
        else cout<<-1<<endl;
    }
}