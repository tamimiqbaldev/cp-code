#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    int mx_index, mn_index;

    int max = INT_MIN, min = INT_MAX;
    for(int i = 1; i<=n; i++) {
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
            mx_index = i;
        }
        if(arr[i]<=min) {
            min = arr[i];
            mn_index = i;
        }
    }
    if(mn_index>mx_index) cout<<(n-mn_index)+(mx_index-1)<<endl;
    else cout<<((n-mn_index)+(mx_index-1)-1)<<endl;
}