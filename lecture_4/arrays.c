#include <stdio.h>

#define max 10
int main(){
    char a[max],b[max],c[max];
  

    printf("Input 3 words \n");
    scanf("%s %s %s",a,b,c); 
    printf("a = %s, b =%s , c =%s \n",a,b,c);
    int length = 0;
    while (a[length] != '\0')
    length++;
  
    printf("length of a %d",length);
    return 0;
   

}
