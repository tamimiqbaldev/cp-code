#include<bits/stdc++.h>
using namespace std;


int main(){
    string s, str; 
    cin>>s;
    multiset<char>x;
    int cn1 = 0, cn2 = 0, cn3 = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='1') cn1++;
        else if(s[i]=='2') cn2++;
        else if(s[i]=='3') cn3++;
    }
    for(int i = 0; i<cn1; i++) str+="1+";
    for(int i = 0; i<cn2; i++) str+="2+";
    for(int i = 0; i<cn3; i++) str+="3+";
    str.pop_back();
    cout<<str<<endl;
}