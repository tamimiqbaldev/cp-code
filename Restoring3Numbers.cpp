#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[4];
    for(int i = 0; i<4; i++) cin>>a[i];
    sort(a, a+4);
    int x1 = a[3] - a[0];
    cout<<x1<<" "<<a[1]-x1<<" "<<a[2]-x1<<endl;
}