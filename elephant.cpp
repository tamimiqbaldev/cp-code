#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int low = 0, up = 0;
    //counting which case letter is more.
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i]>=97 && s[i]<=122) low++;
        else up++;
    }
    
    if(low>=up){
        for(int j = 0; j<s.length(); j++){
            //to lowecase everyone
            if(s[j]>=65 && s[j]<=90) s[j]+=32;
        }
    }
    else{
        for(int k = 0; k<s.length(); k++){
            if(s[k]>=97&&s[k]<=122) s[k]-=32;
        }
    }
    cout<<s<<"\n";
}