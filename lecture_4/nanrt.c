//no Arguement without Return type Functions 
#include <stdio.h>

//declare function
void fun(void);
//calling of the function
void main(){
    fun();
}
void fun(){
    int a,b,sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum = a + b ;
    printf("The sum of %d and %d is %d \n",a,b,sum);
}