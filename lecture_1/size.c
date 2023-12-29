// The code below shows the number of bytes of the data types in memory and the maximum 
// and minimum value of the data type


#include <stdio.h>
#include <float.h>
#include <limits.h>
// Defining the fuction.
int main(){
    // declaration of the data types
    float f;
    char c;
    unsigned char uc;
    double d;
    unsigned long ul;
    int i;
    unsigned int ui;
    short s;
    
// printing out the size of the data type  using the size of operator 
printf("size of the float data type is: %zu bytes\n", sizeof(f));
    printf("size of the char data type is: %zu bytes\n", sizeof(c));
    printf("size of the unsigned char data type is: %zu bytes\n", sizeof(uc));
    printf("size of the double data type is: %zu bytes\n", sizeof(d));
    printf("size of the unsigned long data type is: %zu bytes\n", sizeof(ul));
    printf("size of the int data type is: %zu bytes\n", sizeof(i));
    printf("size of the unsigned int data type is: %zu bytes\n", sizeof(ui));
    printf("size of the short data type is : %hd \n", sizeof(s));

// Printing out the maximum and minininum values of the data types
printf("Maximum value of float: %f\n", FLT_MAX);
    printf("Minimum value of float: %f\n", FLT_MIN);
    printf("Maximum value of char: %d\n", CHAR_MAX);
    printf("Minimum value of char: %d\n", CHAR_MIN);
    printf("Maximum value of unsigned char: %d\n", UCHAR_MAX);
    printf("Maximum value of double: %lf\n", DBL_MAX);
    printf("Minimum value of double: %lf\n", DBL_MIN);
    printf("Maximum value of unsigned long: %lu\n", ULONG_MAX);
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of unsigned int: %u\n", UINT_MAX);

    return 0;

}
