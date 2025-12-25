#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;

    bool caps = true;

    for(int i = 1; s[i]!='\0'; i++){
        if(!(s[i]>=65 && s[i]<=90)){
            caps = false;
            break;
        } 
    }

    if(caps){
        if(s[0]>=90 && s[0]<=122) s[0]-=32;
        else s[0] += 32;
        for(int i = 1; s[i]!='\0'; i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        } 
        }
    }
    cout<<s<<endl;
}