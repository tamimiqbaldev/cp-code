#include<bits/stdc++.h>
using namespace std;

void CaseConverter(char *s, int *x){
    cout<<x<<" "<<*x<<endl;
    char *start = s;
    while(*s){
        switch(*s){
            case 'A'...'Z': *s+=32; 
            break;
            case 'a'...'z': *s-=32;
        }
        s++;
    }
    cout<<start<<endl;//cpp prints the whole string if just the first adress of the string is given
    cout<<*start<<endl;
    //Here only the first value is given to be printed meaning dereferencing the first adress, so only the first value will be printed!
}

int main(){
    char s[] = "HO-jo-bo-ro-LO";
    int xx = 5;
    int *x = &xx;
    CaseConverter(s, x);   
}