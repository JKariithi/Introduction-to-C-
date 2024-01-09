//The program below is for use of for loop to print out the 
//multiplication table of the users desired choice we can even do to 20 or 100
#include <stdio.h>
void main(){
    int table,num,i;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("This is the mutiplication table of %d \n\n",num);
    for (i=0;i<=10;i++)
    {
        table = num * i;
        printf("%d * %d = %d \n",num,i,table);
    }
    // this actually reminded me of how we were forced to learn this as a kid and we had a whole contest for it 
}