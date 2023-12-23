//Program that determines the maximum mumber between two numbers

#include <stdio.h>
int main(){

int first_number, second_number ,max;

printf("Enter two numbers: ");
scanf("%d%d",&first_number,&second_number);


// conditions
   max = (first_number > second_number) ? first_number :second_number;
   printf("%d is the maximum number between the two \n",max);
   return 0;
}