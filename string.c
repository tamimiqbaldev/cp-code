#include<stdio.h>

int main(){
	char c[100];

    scanf("%[^\n]", c);
    /*Here ^-->Xor--> means exclude. 
    Meaning if it encounters '\n' it will stop taking input otherwise keep taking input
    We know:
    1^1 = 0
    0^0 = 0
    1^0 = 1
    0^1 = 1
    Here the used case is: 1^1=0
    Thus '\n' ^ '\n' = 0 
    */
    puts(c);
}