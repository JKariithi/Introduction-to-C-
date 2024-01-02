
#include <stdio.h>
// // here I have the values abcd I want to re-arrange to cdab how let us see 
int main (){
// so in binary val = 0xABCD is 11010101111001101
int val  = 0xABCD;
printf ("Original value : 0x%04X \n",val);
val = ((val & 0xFF) << 8) | (val >> 8);
// to isolate A we use 0xFF
// so val & 0xFF this is binary is  11111111
// we use the and bit wise operator
// val & 0xFF
//          11001101
//      &   11111111
// _________________
//          11001101
// in hexadecimal this is 0xCD we need to flip this 
// with that we have isolated the most signinficant bit 
// next we shit it by to the left by 8 
// 0xCD << 8 
// we get 0xCD00
// then we take 0xABCD and shift it by 8 to isolate we get 0xAB00
// think of it is as each letter has 4 bits to cancel the two hexadecimal values
//  we move by 8 to the right 
//  so now we have 0xCD00 | 0x00AB
//  we change this to binary
    
//    1100110100000000
//  | 0000000010101011
//  ____________________
//    1100110110101011 
printf("Swapped Val:0x%04X \n",val);
// our final value is CDAB
return 0;
}