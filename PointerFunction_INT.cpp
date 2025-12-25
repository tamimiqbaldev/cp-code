#include<bits/stdc++.h>
using namespace std;

void swap_sqr_root(int *a, int *b, long long *sqr, double *rt){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    *sqr = (*a)*(*a);
    *rt = pow(*a, .5);
}

int main(){
    int a, b;
    cin>>a>>b;
    long long sqr;
    double rt;
    
    swap_sqr_root(&a, &b, &sqr, &rt);
    cout<<a<<" "<<b<<" "<<sqr<<" "<<rt<<endl;
}