#include <stdio.h>
int main (){
    unsigned int val = 0xABCD;
    printf("Original value : 0x%08X \n",val);
    val = ((val & 0xF)) << 28 | ((val & 0xF0)) << 20| ((val & 0xF00) << 12 ) | ((val & 0xF000) << 4);
    printf("Reversed value: 0x%08X ",val);
    return 0;
}
// Reversing the hexadecimal 
// 0xABCD to 0xDCBA;