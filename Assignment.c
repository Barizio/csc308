#include <stdio.h>

int main() {
    char menuchoice;
    printf("Welcome to the Assignment! Enter 'c' to input a character, 'f' to input a float or'i' to input an integer: ");
    scanf(" %c", &menuchoice);
    
    switch (menuchoice) {
        case 'c': {
            char character;
            printf("Enter a character: ");
            scanf(" %c", &character);
            printf("Your character: %c\n", character);
            printf("ASCII: %d\n", (int)character);
            printf("Size of your character: %zu bytes\n", sizeof(character));
            printf("Next four characters in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                printf("%c ", character + (i * 3));
            }
            printf("\n");
            break;
        }
        case 'f': {
            float f;
            printf("Enter a float: ");
            scanf("%f", &f);
            printf("Your float: %f\n", f);
            printf("Size of your float: %zu bytes\n", sizeof(f));
            printf("Next four floats in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                printf("%f ", f + (i * 3));
            }
            printf("\n");
            break;
        }
        case 'i': {
            int i;
            printf("Enter an integer: ");
            scanf("%d", &i);
            printf("Your integer: %d\n", i);
            printf("Size of your int: %zu bytes\n", sizeof(i));
            printf("Next four integers in multiples of 3:\n");
            for (int j = 1; j <= 4; j++) {
                printf("%d ", i + (j * 3));
            }
            printf("\n");
            break;
        }
        default:
            printf("Your choice is not valid, please try again!\n");
            break;
    }
    
    return 0;
}