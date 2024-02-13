#include <stdio.h>
//pointers use pass by reference
void swap(int *,int*);
int main(){
    int a,b;
    printf(" Enter a number, a:");
    scanf("%d",&a);
    printf(" Enter a number, b:");
    scanf("%d",&b);
    printf("Before swap a = %d and b = %d \n",a,b);
    swap(&a,&b);
    printf("After swap a = %d,b = %d \n ",a,b);
    
}
void swap(int *a,int *b){
//for swapping of the integers we use a "jar" to store them let's say tempstore to store one variable
//as we swap the other in its place.
   int  tempstore = 0 ;
   tempstore = *a;
   *a = *b;
   *b = tempstore;
}