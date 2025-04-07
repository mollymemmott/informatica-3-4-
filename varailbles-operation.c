#include <stdio.h>

int main () {
int height =50;
int length = 100;
int area = height*length;
int perimeter = height+height+length+length;
printf("Area: %d\n" , area);
printf("Perimeter: %d\n" ,perimeter);


//tempature
int fahrenhiet = 100;
int celsuis = (fahrenhiet-32)/1.8;
printf("%d°F = " ,celsuis);

//minutes and hours 
int mins = 349;
int hours =mins/60;
int extramins = mins%60;
printf("\n%d minutes is eqaul to " , mins);
printf("%d hours and " , hours);
printf("%d minutes .n" , extramins);
}