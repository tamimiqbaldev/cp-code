#include<bits/stdc++.h>
using namespace std;


int main(){
    //from scratch
    int n;
    cin>>n;
    int cnt = 0, cube = 1, gun = 1;
    for(int i = 2; gun<=n; i++){
        cube+=i;
        gun += cube;
        cnt++;
    }

    cout<<cnt<<endl;
}