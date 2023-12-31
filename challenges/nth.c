// this code is to find the set of the nth term of the integer

#include <stdio.h>

int main (){
    // Defining the variable
    int n,num,bitStatus;
    // Input the number to be checked
    printf("Enter number to be checked");
    scanf("%d",& num);
    // input of the nth term 
    printf("Enter the nth term (0-31): ");
    scanf("%d",& n);
    // moving the nth term to the Oth position so that the & opereation is used to
    // to check the nth term. 
    // This is because the binary numbers are written from the right going to left
    // that is their order
    //& operator is set to 1 if both bits  are 1 
    bitStatus = (num >> n) & 1 ;
    // print out the n inputed and the set of the nth term 
    printf("the %d bit is set to %d",n , bitStatus);

     
    return 0;
}