#include<bits/stdc++.h>
using namespace std;
#define for(i,a,b) for(int i = a; i<b; i++)
typedef long long ll;

int main(){
    int a, b, c, d, e;
    set<int>x;

    cin>>a>>b;
    for(i, 0, b){
        cin>>c;
        if(c<=a) x.insert(c);
    }
    cin>>d;
    for(i, 0, d){
        cin>>e;
        if(e<=a) x.insert(e);
    }
    if(x.size()==a) cout<<"I become the guy.\n";
    
    else cout<<"Oh, my keyboard!\n";

}