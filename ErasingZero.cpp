#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; 
    string s;
    cin>>t;
    while(t--){
        cin>>s;
    
        int i = 0, bl=0; 
        while(s[i]!='\0'){
            if(s[i]=='1'){
                bl = i;
                break;
            }
            i++;
        }
        bool dhon = false;
        int j = 0, sl=0;
        while(s[j]!='\0'){
            if(s[j]=='1') {
                sl = j;
                dhon = true;
            }
            j++;
        }
        int cnt = 0;
        if(dhon){
           for(int k = bl; k<=sl; k++){
               if(s[k]=='0') cnt++;
           }
            cout<<cnt<<endl;
        }
        else cout<<0<<endl;
    }
}   