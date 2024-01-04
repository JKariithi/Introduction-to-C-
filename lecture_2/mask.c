//creating bit masks
// masking is to set bits to 1 or 0 
// To remove the bits you don't care about 
//Let us start
#include <stdio.h>


int main (){
    // defining x 
    unsigned int x;
    //input of x
    printf("Enter a number: ");
    scanf("%u",&x);
    // masking a specific bit.
    x &=  ~(1 << 2);
    printf("new number after masking: %u \n ",x);
    
    return 0 ;
}
