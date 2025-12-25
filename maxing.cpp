#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int max = INT_MIN;

    int x;
    for(int i = 0; i<4; i++)
    {
        cin>>x;
        if(x>max)
        max = x;
    }
    cout<<max;
}