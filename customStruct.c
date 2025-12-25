#include<stdio.h>
#include<string.h>
struct tam{
    char nam[20];
    int age;
    double height;
};

void voxod(struct tam *tamma){
    tamma->age = 21;
}

int main(){
    struct tam tami;
    voxod(&tami);
    printf("%d\n", tami.age);
}