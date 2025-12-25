#include<bits/stdc++.h>
using namespace std;


int main(){
    int hs[26];
    string s;
    cin>>s;

    for(int i =0; s[i]!='\0'; i++){
        if(s[i]>=65 && s[i]<=90) hs[s[i]-65]++;
        if(s[i]>=97 && s[i]<=122) hs[s[i]-97]++;
    }
    
    for(int j = 0; j<26; j++){
        if(hs[j]==0){
            cout<<"NOpe"<<endl;
            return 0;
        }
    }
    cout<<"Cuming"<<endl;
}