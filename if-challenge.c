#include <stdio.h>

int mian () {
    printf("Enter a year : ")
    int year;
    scanf("%d", &year);

    if (year %4 == 0){
        printf("% is a leap year.\n" , year);
        
    }