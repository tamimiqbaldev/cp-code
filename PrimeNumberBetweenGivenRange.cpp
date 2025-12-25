#include <bits/stdc++.h>
using namespace std;
#define nl endl

bool isPrime(int n){
    if(n<=1)  return false;

    for(int i = 2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}


signed main() {
   cout<<"Give Two Range: ";
   int a, b; cin>>a>>b;

   cout<<"\nThe Prime Numbers between the Range are: ";

   if(a>b) swap(a, b);

   for(int i = a; i<=b; i++){
        if(isPrime(i)) cout<<i<<" ";
   }
   cout<<nl;
   
    return 0;
}