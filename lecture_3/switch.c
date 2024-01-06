#include <stdio.h>
int main(){
    char ch;
    printf("Enter a single character: ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
     printf("Char %c is a vowel \n",ch);
     break;
    
    default:
     printf("Char %c is not a vowel \n",ch);

        break;
    }
    return 0;
}