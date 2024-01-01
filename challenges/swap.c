#include <stdio.h>
//this is another example of swapping of the letters to get ECAFE as the result 
//can I alter this to get CEFA
int main(){
    int val = 0xCAFE;
    printf("original val 0x%04X",val); 
    val = (val >> 4) | ((val & 0xF) << 12);
    printf("Swapped val 0x%04X",val);
    return 0;
}