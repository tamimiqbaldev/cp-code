#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int noya[n], itr[n];

    for(int i = 1; i<=n; i++){
        cin>>itr[i];
        noya[itr[i]] = i;
    }
    for(int i = 1; i<=n; i++) cout<<noya[i]<<" ";
    cout<<endl;
}