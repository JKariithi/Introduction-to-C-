#include <stdio.h>
  int main (){
    // Defining the parameters
     float area, length, width;
    // Input length
     printf("Enter Length: ");
     scanf("%f", &length);
    //  Input width
     printf("Enter width: ");
     scanf("%f",&width);
    //  The ampersand (&) allows us to pass the address of variable number which is the 
    // place in memory where we store the information that scanf 
    // This is however not needed in printf
  
    //  Defining the calculation for the area of the rectangle 
    area = length * width;
//    Our output 
printf("Area of the rectangle is %f sq units ",area);

return 0 ;

    }