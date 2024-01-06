#include <stdio.h>
//The code below is using switch case for a simple calculator
void main(){
    int a,b,sum,div,mult,min;
    char operator;
    //input of the numbers a and b
  
    printf("Enter the operand(+,-,/,*): ");
    scanf("%c",&operator);
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    //Don't separate the above lines the codee will not work as it should
    

    switch (operator)//the expression is operator because that is what varies
    {
    case '+' :
        sum = a + b;
        printf("%d \n",sum);
        break;
    case '-' :
        min = a - b;
        printf("%d \n",min);
        break;
    case '/' :
        div = a / b;
        printf("%d \n",div);
        break;
    case '*' :
        mult = a * b;
        printf("%d \n",mult);
        break;
    
    default:
    printf("Invalid operator,try again");
        break;
    }
   
}