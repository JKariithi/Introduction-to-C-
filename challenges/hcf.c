//highest common factor
#include<stdio.h>
 
void main()
{
    int num1, num2, hcf, remainder, numerator, denominator;
 
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    printf("%d", remainder)
   
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    //this loop continues until the remainder value is 0;
    //the denominator that provides this is hcf
    hcf = denominator;
    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
}