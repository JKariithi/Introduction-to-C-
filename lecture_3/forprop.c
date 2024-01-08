#include <stdio.h>
//here we learn that for loops can take many variables
void main(){
    int i,j;
    for(i=1,j=0; i <= 10,j <= 5; i++,j++){
        printf("%d%d\n",i,j);
    }
}
//using this examples that both conditions have to be true for the out put to be printed
//If you remove the condition the loop remains infinite 
//we can initialize the for loop from the int i,j and write int i=1,j=0 ;
//the for loop becomes for (;i <= 10,j <= 5; i++,j++)the same output is given what is 
//important is the semicolon