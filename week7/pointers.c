#include <stdio.h>
int main(){
    int a;
    
    // char name[6];
    int *p2a = &a;
    a=10;

   printf("The value of a is: %i\n; Adress: %p\n",*p2a,p2a);
}