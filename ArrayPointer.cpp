#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[] = {1, 2, 3, 4};
    int *p = a;

    cout<<&a[0]<<" "<<&a<<" "<<a<<" "<<a+1<<endl;
    cout<<*a<<" "<<*p+1<<" "<<*(p+1)<<endl;   
}