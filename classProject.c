#include <stdio.h>

char order;
int cart = 0;
int YorN;
int quantity;
int total;
int main(){
    printf("Welcome to the resturant");
    do{
    printf("What would you like to order?\n P = Poundo (3200)\n F = Fried Rice (3000)\n A = Amala (2500)\n E= = Eba (2000) \n W = White Rice and Stew (2500)\n");
    scanf ("%c", &order);
    
            switch (order)
    {
    case 'P': case'p':
        printf("\nHow many Poundo?:");
        scanf("%d", &quantity);
        total = quantity * 3200;
        cart = cart + total;
        printf("Your total is: ");
        printf("%d\n", cart);
        
        break;

     case 'F' : case 'f':
        printf("\nHow many Fried Rice?:");
        scanf("%d", &quantity);
        total = quantity * 3000;
        cart = cart + total;
        printf("Your total is: ");
        printf("%d\n",cart);
        break;

         case 'A' : case 'a':
         printf("\nHow many Amala?:");
        scanf("%d", &quantity);
        total = quantity * 2500;
        cart = cart + total;
        printf("Your total is: ");
        printf("%d\n",cart);
        break;

         case 'E' : case 'e':
         printf("\nHow many Eba?:");
        scanf("%d", &quantity);
        total = quantity * 2000;
        cart = cart + total;
        printf("Your total is: ");
        printf("%d\n",cart);
        break;

         case 'W' : case 'w':
         printf("\nHow many White Rice?:");
        scanf("%d", &quantity);
        total = quantity * 2500;
        cart = cart + total;
        printf("Your total is: ");
        printf("%d\n",cart);
        break;
    default:
        break;
    }

    printf("Would you like to order again? (1 for yes 0 for no) :");
    scanf("%d", &YorN);
    } while (YorN != 0);
    
    printf("\nThank you for shopping with us! Your total is: ");
    printf("%d\n", cart);
    
 return 0;
}