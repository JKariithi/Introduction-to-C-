
// Reversing the byte order of a hexadecimal number 
//how to communicate from little endian to big endian 
#include <stdio.h>

int main() {
    int val = 0xCAFE;

    printf("Original value: 0x%04X\n", val);
//    Putting it together, when used with printf, %04X 
// (%)will format an unsigned integer in (X)hexadecimal with a 
// minimum width of four characters,(0) padded with leading zeros if the number has
// fewer than four digits

    val = ((val & 0xFF) << 8) | (val >> 8);
    //reverses the order of the variable;
    // so 0xFF in binary is 11111111
    // and 0xCAFE & 0xFF will give you 0xFE
    //(0xFE << 8 we get 0xFE00
    //then now 0xCAFE >> 8 will give you 0x00CA
    //0xFE00 | 0x00CA is 0xEFAC
    // knowlegde of conversion from binary to hexadecimal is required to understand
     

    printf("Swapped value:  0x%04X\n", val);
    


    return 0;
}

