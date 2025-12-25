#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    for(int i = 2; i>=0; i--){
        if(x&(1<<i)) cout<<'1';
        else cout<<'0';
    }
}