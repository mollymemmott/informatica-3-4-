//Program to display qa number if it ia ne


#include <stdio.h>

int main()   {
    int number;

    printf("Enter an interger; ");
    scanf("%d" , &number);

     // true if number is less then 0
    if (number < 0) {
        printf("%d is a negative.\n" , number);
          


    }

    printf("The if statement is easy.");

    return 0;
}