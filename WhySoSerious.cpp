#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[3];
    for(int i = 0; i<3; i++) cin>>arr[i];
    sort(arr, arr+3);
    int median = arr[1];

    int m = abs(median-arr[0]) + abs(median-arr[1]) + abs(median-arr[2]);

    cout<<m<<endl;
}