// Today I was learning about unary operators most especially increament an decreament operators

#include <stdio.h>

int main(){
   //comments 
    int y = 11;
    int x = 12;

    int a = 13;
    int b = 14;
   //postfix
    y = x ++ ;
    // here what has happened is first the x value is assigned to y then
    //the x value is increamented
    //prefix 
    a = ++ b;
    // here the b value is increamented then the new value of b is assigned to a

    printf("%d \n",x );
    // x = 13 ; after increamentation 
    printf("%d \n",y );
    // y = 12 as y was assigned x before increamentation 
    printf("%d \n",a);
    // a = 15 as b is increamented and then assigned to a
    printf("%d \n",b);
    // b = 15 the new value after increamentation.
    return 0;
}
// I will do more examples to make sure I undersatand.
// me too 