#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 303; 
    int *ptr;
    ptr = &n;
    
    cout<<n<<endl;
    cout<<&n<<" "<<ptr<<"\n";
    cout<<*ptr<<"\n";
    cout<<*&ptr<<"\n"<<**&ptr<<endl;
}