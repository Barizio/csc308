#include <stdio.h>
int main(){
    // double c;
    // float b;
    // int a;
    char name[] = "George";

    // int *p2a = &a;

    // Pointer Arithmetic
    for(int i=0; i<7 ; i++){
        printf("%c\n", name[i]);
    }
    puts(" ");

    char *p2name = name;
     for(int i=0; i<7 ; i++){
        printf("%c\n", *p2name);
       p2name++;

    }
}