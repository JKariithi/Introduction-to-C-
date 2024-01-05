//here we will discuss nested if statements
// how salary and age determines increament of salary this the basis of the program

#include <stdio.h>
void main(){

    int age,salary; 
    //input our data 
    printf("Enter age ");
    scanf("%d",&age);
    printf("Enter salary ");
    scanf("%d",&salary);
    //defining our conditions
    if (age > 60)
    { //outer if statement 
      if (salary >= 150000)//inner if statement
      salary += 100000;
      else // inner else statement
      salary += 50000;
      }
    else // outer else statement 
      salary += 10000;
    
    printf("Your new salary is : %d \n",salary);
    



   
}