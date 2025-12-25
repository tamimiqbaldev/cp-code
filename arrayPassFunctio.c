#include<stdio.h>

int sum(int arr[], int n){
    int sm = 0;
    for(int i = 0; i<n; i++)  sm+=arr[i];
    return sm;
}
int main(){
    int ar[3] = {1, 2, 3};
    int sz = sizeof(ar)/sizeof(int);
    
    printf("%d\n",sum(ar, sz));
}