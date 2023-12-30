//Checking the least significant biit in a number 
#include <stdio.h>

int main(){
     int num, lsb;

     //input the number
     printf("Enter the number: ");
     scanf("%d",&num);

    

    //defining condition 
    if (lsb & 1 )
     printf("the lsb of %d id set (1)",num);
    else
     printf("the lsb of %d id set (0)",num);

    return 0; 
}