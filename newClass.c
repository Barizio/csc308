#include <stdio.h>

int main(){
    int a;
    float b;
    double c;
    char name [6];

    int *p2a = &a;
    a = 10;

    printf("%i\n", *p2a);

    //printf("%d\n", a);
}