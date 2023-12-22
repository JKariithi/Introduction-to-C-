#include <stdio.h>
// using operations to check if  a character is lower case, upper case , a digit
// or a special character.
void main(){
    char c ;
    printf("Enter Character: \n");
    scanf("%c \n",&c);

    if (c>= 'A' && c<= 'Z')
        printf("  This is an upper case letter \n");
    
    else if(c>= 'a' && c<= 'z')
         printf("  This is a lower case letter \n");
    else if(c>= '0' && c<= '9')   
         printf("This is a digit \n");
      else if(c == '\n' || c == '\t'|| c == ' ')  
        printf("This is whitespace \n");
    else
     printf("this is a special character \n");

}