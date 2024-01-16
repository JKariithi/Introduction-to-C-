// Call by reference 
//pointer neeeded in declaration also 
//The declaration parameters and that of the definition should be the same 

#include <stdio.h>
int val(int*, int*);

void main(){
    int a = 50, b = 70;
    val(&a, &b);
    printf("a = %d and b = %d \n",a,b);
}
int  val (int *a,int *b){
    
    *a = 5;
    *b = 7;
 
    printf("a = %d and b = %d \n",*a,*b);
}