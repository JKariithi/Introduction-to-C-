#include <stdio.h>

#define max 10
int checkLength(char a[], char b[], char c[]);
int main(){
    char a[max],b[max],c[max];


    printf("Input 3 words \n");
    scanf("%s %s %s",a,b,c); 
    printf("a = %s, b =%s , c =%s \n",a,b,c);
    return 0;
  
}
int checkLength(char a[], char b[], char c[]){
    int lengthA = 0;
     char a[max], b[max], c[max];
    while (a != '\0')
    lengthA++;
    printf("length of a %d",lengthA);
    return lengthA;
}

