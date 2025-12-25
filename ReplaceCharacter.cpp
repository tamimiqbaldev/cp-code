#include<iostream>
using namespace std;

int main(){
    int t, n;
    string s;
    cin>>t;

    
    
    for(int i = 0; i<t; i++){
        cin>>n>>s;
        if(n==1){
            cout<<s<<"\n";
        }
        else{
            for(int j = 0; j<n-1; j++){
                //to find the most repetative letter
                //if the word is of more than that letter than change immediate previous or later
                //of the next repetation letter letter with repetative letter
                if(s[j]==s[j+1]){
                    if(s[j-1]>0 && s[j-1]!=s[j+1]) s[j-1]=s[j];
                    // else if(s[j+1])
                    break;
                }
            }
            cout<<s<<"\n";
        }
    }
}