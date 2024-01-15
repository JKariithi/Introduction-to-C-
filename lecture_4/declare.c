//declare function first before using it 
#include <stdio.h>
// float sum();//fuction declaration
// void main (){
//     sum(); //function calling 
// }
// float sum (void){ //function defination
//     float a,b,sum = 0;
//     printf("Enter two numbers: ");
//     scanf("%f %f",&a,&b);
//     sum = a + b;
//     printf("sum = %f ",sum);
// }
char fun();

void main(){
    char ch;
    ch =fun();
    printf("ch = %c \n",ch);
}
char fun(){
    char c;
    printf("Enter a character: \n");
    scanf("%c",&c);
    return 'c'; //store's the character inputed 
    // changing it to 'c' it ignores all other values inputted and returns c
}