#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n], y[n];
    //2 3 4 1
    //1 2 3 4
    //           4 1 2 3

    for(int i = 1; i<=n; i++){
        cin>>x[i];//taking input as of question
        y[x[i]] = i;
    }
    for(int j = 1; j<=n; j++) cout<<y[j]<<" ";
    cout<<"\n";
}