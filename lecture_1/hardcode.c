#include <stdio.h>
// using operations to check if  a character is lower case, upper case , a digit
// or a special character.
// printf = our output
// scanf = our input
int main(){
    char c ;

    printf("Enter Character: "); 
    scanf("%c",&c);

    if (c>= 'A'&& c<= 'Z')
        puts("  This is an upper case letter");
    else if(c>= 'a' && c<= 'z')
         printf("  This is a lower case letter \n");
    else if(c>= '0' && c<= '9')  
         printf("This is a digit \n");
      else if(c == '\n' || c == '\t'|| c == ' ')  
        printf("This is whitespace \n");
    else
     printf("this is a special character \n");
     return 0;

}
