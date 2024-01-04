#include <stdio.h>
//Code to find the perfect number that is divisible by 2
// we use % (mod operator)
//this was a leet code question I modified

int main() {
    int num;

    printf("Input the number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("True \n");
    else
        printf("False \n");

    return 0;
}
