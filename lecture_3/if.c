//if is a single selection statement 
//if (condition)
  // statement 
// test expression 
#include <stdio.h>
int main (){
    int a;
    printf(" enter number: ");
    scanf("%d",&a);
    if(a){//if this condition is true the following is printed out 
     printf("inside block");
     printf("value of a = %d \n");
    }
    // if you want more than one statement you have to use brackets
    
    //if the statement is false the after if statements are printed out.
    printf("Outside block");

    return 0;
}