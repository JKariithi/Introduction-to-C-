#include <stdio.h>
int TestData(int *) ;
int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    TestData(&num);    
    return num;
}
int TestData (int *num){
    int bit = 0;
    for (;bit != {1111};bit++){
        if(*num %2 == 1){
            puts("1");
        }
        else{
            puts("0");
        }
    }
    printf("%d",bit);
    return 0;


   
}