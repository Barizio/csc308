#include <stdio.h>

int main() {
    int age;

    printf("Please enter your age: ");

    if (age >= 18) {
        printf("You can vote.\n");
    } else {
        printf("You cannot vote.\n");
    }

    return 0;
}