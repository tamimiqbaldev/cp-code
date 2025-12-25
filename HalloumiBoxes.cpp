#include<bits/stdc++.h>
using namespace std;
#define for(i,a,b) for(int i = a; i<b; i++)
typedef long long ll;

int main(){
    int t, n, k;
    cin>>t;

    while(t--){
        cin>>n>>k;

        int arr[n];
        for(i, 0, n) cin>>arr[i];

        if(is_sorted(arr, arr+n) || k>1) cout<<"yES\n";
        else cout<<"No\n";
    }
}