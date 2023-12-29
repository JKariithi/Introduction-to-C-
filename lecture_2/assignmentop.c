// here we discuss assignment operators 
// this include "=" and the short hand notations such as "%=", "<<=" and so on
// point to note with the short hand can only work of a = a + 1 then short hand is 
// a += 1 but let's say we have a = b + 2 we can not use the short hand expression.
#include <stdio.h>

int main (){

    int a;
    int b;
    a = 7 ;
    a += 1 ;

    printf(" a = %d \n",a);

    b = 7;
    b ^= 0 ; 
    printf("b = %d \n",b );
    return 0;


    
}