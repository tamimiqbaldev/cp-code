#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    string dhon, s; 
    cin>>dhon;

    int j = 0;
    for(int i = 0; i<n; i+=j){
        s+=dhon[i];
        j++;
    }
    cout<<s<<endl;
}