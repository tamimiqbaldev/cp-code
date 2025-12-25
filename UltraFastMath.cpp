#include<bits/stdc++.h>
using namespace std;
// #define for(i,a,b) for(int i = a; i<b; i++)
typedef long long ll;

int main(){
    int a, b;
    cin>>a>>b;

    int result = a^b;
    for(int i = 31; i>=0; i--){
        cout<<((result>>1)&1);
    }
    cout<<"\n";
}