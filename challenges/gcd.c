//the gcd of two numbers using for loop
#include <stdio.h> 

void main ()
{
    int num1,num2,gcd,remainder,denominator,numerator;

    printf("Enter two numbers \n");
    scanf("%d %d",&num1,&num2);
    if (num1 > num2){   
        numerator = num1;
        denominator = num2;
    }
    else{
        numerator = num2;
        denominator = num1;
    }

    remainder = numerator % denominator;
   
    
    for (;remainder != 0; remainder = numerator % denominator ){
        numerator = denominator;
        denominator = remainder;
    }
    gcd = denominator;
   printf("%d \n",gcd);
}