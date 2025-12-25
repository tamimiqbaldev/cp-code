#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int x, r; 

    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            cin>>x;
            if(x==1){
                r = abs(3-i) + abs(3-j);
            }
        }
    }
    cout<<r<<"\n";
}