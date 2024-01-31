//below is a program  with no arguement but has a return type 
#include <stdio.h>

int sum (void);
void main(){
    int s;
    s = sum();
    printf("sum = %d \n",s);
}
int sum (){
    int a, b, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum = a + b;
    return sum;
}
