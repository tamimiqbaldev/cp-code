#include<iostream>
using namespace std;

int main(){
    int n, p, c, y = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>p>>c;
        if(c-p>=2) y++;
    }
    cout<<y<<"\n";
}