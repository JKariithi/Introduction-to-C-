// find the hcf of two numbers 
#include <stdio.h>
void main (){
   int num1,num2,i,hcf = 1,highest;
  printf("Enter first number: ");
  scanf("%d",&num1);
  printf("Enter second number: ");
  scanf("%d",&num2);
  if (num1 > num2)
    highest = num1;
 else 
    highest = num2 ;
  for(i=1; i < highest;i++){
   if ( num1 % i == 0 && num2 % i == 0){
      hcf *= i;
      num1 /= i;
      num2 /= i;
  
      
   }


  }

printf("hcf = %d \n", hcf);
}