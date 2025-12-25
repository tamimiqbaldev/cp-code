#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = n;//for palindroming
    int rev = 0;
    //first removing the last 0 which is leading zero.
    //last number zero are not palindrome.
    while(n%10 == 0) n/=10;

    while(n!=0){
        int rem = n%10;
        cout<<rem;
        rev = (rev*10) + rem;
        n/=10;
    }
    cout<<"\n";

    if(rev == x) cout<<"YES\n";
    else cout<<"NO\n";
}