//simple for loop example 
#include <stdio.h>
void main (){
    int i,n;
    printf("Enter any number: ");
    scanf("%d",&n);
    
    printf("Natural numbers from 1 to %d: \n\n",n);
    // for loop has three expression seperated by semi colons (;)
    //for(initialization;condition;update/modify)
    for(i = 1; i <=n; i++)
    {
        printf("%d \n",i);
    }
    
}//this example explains it's self 


