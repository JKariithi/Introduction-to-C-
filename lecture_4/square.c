#include <stdio.h>
void square();
void main(){
    square();
}
void square(){
    float n;
    float sqr = 0;
    printf("Enter a number n: ");
    scanf("%f",&n);
    sqr = n*n;
    printf("The square of n is %.2f \n",sqr);
}
