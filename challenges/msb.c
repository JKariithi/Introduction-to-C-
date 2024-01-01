// Check the most significant bit of a number 
#include <stdio.h>
#define BITS sizeof(int)*2 
int main(){

     int num, msb;
    
    //  input of the user 
    printf("Enter a binary number: ");
    scanf("%d",&num);
    //don't leave a space in the quotes of scan f,leads to erroe 
    
    printf("\n");
    // calulating the msb 
    msb = 1 << (BITS - 1);
    // This shifts one to the left most/ highest order 

    // Defining the condition using AND operator (&)
    // how the and operators work if both bits operated on are one the result is true 
    // if any of them is 0 the result is false 

    if (num & msb)
     printf("the msb of %d id set (1)",num);
    else 
     printf("the msb of %d is set (0)", num);
    return 0;
}

//lets check if a number is a least significant bit 
