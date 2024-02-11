#include <stdio.h>

#define max 10
int checkLengths(char[] ,int);
//number of strings 
int main(){
    char a[max],b[max],c[max];
    char *s[] = {a,b,c};
    printf("Input 3 words \n");
    scanf("%s %s %s",a,b,c); 
    int *length = checkLengths(s,3);
    printf("Length of a = %d\n",length[0]);
    printf("Length of b = %d\n",length[1]);
    printf("Length of c = %d\n",length[2]);

    return 0;  
}
int *checkLengths (char[] *s,int n){
    int length[n];
    for (int i = 0; i < n ;i++){
        length [i]= 0;
        while (s[[i]length[i]] != 0)
        length[i] ++;
    }
    return length;
}