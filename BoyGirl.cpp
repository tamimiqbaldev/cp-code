#include<bits/stdc++.h>
using namespace std;
#define for(i, a, b) for(int i = a; i<b; i++)

int main(){
    string s;
    cin>>s;

    set<char>ch;
    for(i, 0, s.size()) ch.insert(s[i]);

    //accessing set size
    if(ch.size() % 2 == 0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
}