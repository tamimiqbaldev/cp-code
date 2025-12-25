#include<bits/stdc++.h>
using namespace std;
#define for(i,a,b) for(int i = a; i<b; i++)

int main(){
    int m;
    set<int>x;
    for(i, 0, 4){
        cin>>m;
        x.insert(m);
    }
    int l = 4 - x.size();
    cout<<l<<"\n";
}