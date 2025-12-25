#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, j=0;
    long long sum = 0;
    cin>>n;
    string s;
    for(int i = 0; i<n; i++){
        cin>>s;
        if(s[j]=='T') sum+=4;
        else if(s[j]=='C') sum+=6; 
        else if(s[j]=='O') sum+=8;
        else if(s[j]=='D') sum+=12;
        else if(s[j]=='I') sum+=20;
    }
    cout<<sum<<endl;
}