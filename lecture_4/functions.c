// Functions or modules  in C
//block of code that performs a specific task 
//main function must be there 
#include <stdio.h>
void sum (){
    int a,b,sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("sum = %d ",sum);
}
void main(){
    sum();
    printf("hello");

}