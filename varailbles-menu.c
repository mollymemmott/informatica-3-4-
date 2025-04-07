#include <stdio.h>

int main () {
    char snack1[] = "Chips" ;
    char snack2[] = "soda"  ;
    char snack3[] = "Candy" ;

    float price1 = 1.50; // Price of Chips 
    float price2 = 2.00; // Price of Soda 
    float price3 = 0.75; // Pricee of Candy


    int quantity1 = 20; // Quantity of Chips avaible 
    int quantity2 = 15; // Quantity of Soda available 
    int quantity3  = 30; // Quantitty of Candy available 

    // Print the menu 
    printf("Welcome to the Snack shop!\n")
    printf("---------------------------\n");
]   printf("1. %s - $%.2f -%d available\n",snack1,price1, quantity);
    printf("2. %S - $%.2f -%d available\n",snack2,price2, quantity2);
    printf("3. %s - $%.2f -%d available\n",snack3 ,price3, quantity3);

    return 0;
}
