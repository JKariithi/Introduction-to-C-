#include <stdio.h>
// Defines pi in the whole program
#define PI 3.14
int main(){

    float radius, area, diameter,perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
// Calulation of diameter;
diameter = radius * 2;
// Calculation of area 
area =  PI * (radius) * (radius);
printf("Diameter =  %.2f \n", diameter);
printf("area = %.2f \n", area);
// Calculation the perimeter
perimeter = PI * diameter;
printf("Perimeter = %.2f \n",perimeter);
return 0;
// %.2f gives your value in 2 decimal places amazing !!
}