#include<iostream>
using namespace std;

int main(){
    //distinct odd->boy   even->girl
    //all lower english letter.
    
    long long int n, rem;
    cin>>n;
    
    int lcy = 0;
    while(n!=0){
        rem = n%10;
        if(rem == 4 || rem == 7) lcy++;
        n/=10;
    }
    if(lcy == 4 || lcy == 7) cout<<"YES\n";
    else cout<<"NO\n";
    
}