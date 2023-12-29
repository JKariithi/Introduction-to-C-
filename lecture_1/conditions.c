// using the ctype library to determine if a character is a upper case letter,
// lower case letter, a digit, whhitespace or a special character


#include <ctype.h>
#include <stdio.h>
int main (){
char c;
printf("Enter character:  ");
// this allows you to input a value in C
scanf("%c \n", &c);
if (isupper(c)){
    printf("%c is in uppercase \n",c);
}   
    else if (islower(c)){
    printf("%c is lowercase \n",c);
}   
    else if(isdigit(c)){
    printf("%c is digit \n",c);
}   
    else if (isspace(c)){
    printf("%c is whitespace \n",c);
}   
   else{
    printf("%c it is  a special character \n" ,c);
   }
     

return 0; 

}