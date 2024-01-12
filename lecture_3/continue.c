#include <stdio.h>
int main (){
    int i , sum = 0, a;
    for (i=0;i<=5;i++){
        printf("Enter number: ");
        scanf("%d",&a);
          if (a < 0){
            continue;
            }
        sum = sum + a;
    }
    printf("sum = %d \n", sum);
    return 0;
}