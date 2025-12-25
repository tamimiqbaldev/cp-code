#include<stdio.h>

int main(){
    char s[100];
    scanf("%10[^\n]s", s);
    puts(s);
}