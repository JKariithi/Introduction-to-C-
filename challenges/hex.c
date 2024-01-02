#include <stdio.h>

int main() {
    unsigned int val = 0xABCDEF;

    printf("Original value: 0x%08X\n", val);

    val = ((val & 0xFF) << 24) | ((val & 0xFF00) << 8) | ((val >> 8) & 0xFF00) | ((val >> 24) & 0xFF);

    printf("Swapped value:  0x%08X\n", val);

    return 0;
}