// A program to print z to a using while loop
//using ascii values 
#include <stdio.h>
void main (){
    int i = 122;
    printf("learn your abc's below \n\n");
    while (i >= 97){
        //prints the character values of this numbers 
        //so prints out a-z (122 - 97)
        printf("%c \n",i) ;
        i--;
    }

}