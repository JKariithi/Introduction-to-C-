#include <stdio.h>
#include <string.h> 
#define max 10
int main(){
    char a[max],b[max],c[max];
    int length = 0;

    printf("Input 3 words \n");
    scanf("%s %s %s",a,b,c); 
    printf("a = %s, b =%s , c =%s \n",a,b,c);
    length = strlen(a);
    printf("length of a %d",length);
    return 0;


}
