#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string x;
    cin>>x;
    
    int cnt = 0;

    //counting number of repetation with nested loop
    for(int i = 0; i<x.size()-1; i++){
        for(int j = i+1; j<x.size(); j++){
            if(x[i]==x[j]){
                cnt++;//count increment with each letter duplication 
                //putting in mind of multiple duplication of the same letter 
            }
        }
    }
    if((x.size()-cnt)%2 == 0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
}
//zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
//to ignore!