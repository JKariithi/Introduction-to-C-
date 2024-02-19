 #include <stdio.h>
int factorial(int); 
 int main(){
    factorial(9);
    return 0;
 }
 int factorial(int n) {
 int i = 1, ret = 1 ;
 while ( i <= n ){
    ret *= i ;
    printf("%d!\n",i);
    i ++; 
 }
 printf("Factorial = %d  \n",ret);
return ret ;
}