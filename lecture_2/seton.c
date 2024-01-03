#include <stdio.h>
//the code below checks if the last four or three bits are on 
//this means non zero bits 
int main() {
    unsigned int val = 0xCAFE;
    int bits;
    
    // Print the original value
    printf("The original value: 0x%X\n", val);
    
    // Isolate the last 4 bits
    bits = (val & 0xF); // Changed the mask to isolate the last 4 bits
    printf("The isolated value: 0x%X\n ",bits);
    

    // Condition to check if the last 3 bits are set on
    // the values that fit this equality is 
    //0x7 = 0111,
    //0xB = 1011
    //0xD = 1101
    //0xE = 1110
    //0xF = 1111
    if ( bits==0x7 || bits==0xB || (bits>=0xD)){
        printf("Last 3 or 4 bits are  on\n");
    } else {
        printf("Last 3 or 4 bits are not  on\n");
    }

    return 0;
}

