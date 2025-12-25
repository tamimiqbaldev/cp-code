#include<bits/stdc++.h>
using namespace std;


int main(){
    string s, x;
    cin>>s;

    for(int i = 0; s[i]!='\0'; i++){
        if(s[i]>=65 && s[i]<=90 && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y'){
            x+='.';
            x+=(s[i]+32);
        }
        else if(s[i]>=97 && s[i]<=122 && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){
            x+='.';
            x+=s[i];
        }
    }
    cout<<x<<endl;
}