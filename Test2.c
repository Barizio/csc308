
#include <stdio.h>

int main() {
    int cscTwo, cscThree, cscFour; 

    printf("Please enter your CSC 201 score: ");
    scanf("%d", &cscTwo); 

    printf("Please enter your CSC 205 score: ");
    scanf("%d", &cscThree); 

    printf("Please enter your STA 205 score: ");
    scanf("%d", &cscFour); 

    int total;
    total = cscFour + cscThree + cscTwo; 
    printf("Your total is: %d\n", total); 

    int average = total / 3; 
    printf("Your average is: %d\n", average); 

    printf("Your percentage is: %d percent\n", average );

    return 0; 
}