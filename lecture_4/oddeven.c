#include <stdio.h>
void oddeven(int *);
void main(){
    int num;
    printf("Enter the number num:");
    scanf("%d",&num);
    oddeven(&num);
}
void oddeven(int *num){
    if (*num%2 == 0){
        printf("the number %d is even \n",*num);
    }
    else{
        printf("the number %d is odd \n",*num);
    }
    
}