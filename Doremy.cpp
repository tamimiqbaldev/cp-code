#include<bits/stdc++.h>
using namespace std;


int main(){
  int t; 
  cin>>t; 
  while(t--){
    int n; 
    cin>>n;
    int arr[n];
    set<int>ar;
    for(int i = 0; i<n; i++){
      cin>>arr[i];
      ar.insert(arr[i]);
    }
    if(n==2) cout<<"YES\n";
    else if(n==3 && ar.size()<=2) cout<<"YES\n";
    else if(n>=4 && ar.size()<=2) cout<<"YES\n";
    else cout<<"NO\n";
  }   
}