 #include <stdio.h>
int factorial(int); 
 int main(){
    factorial(5);
    return 0;
 }
 int factorial(int n) {
 int i , ret = 1 ;
 for( i = 1 ; i <= n ; i ++){
    printf("%d!",i);
    ret *= i ;
 }
 printf("Factorial = %d \n",ret);
return ret ;
}