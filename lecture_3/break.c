

#include <stdio.h>
int main (){
    int i,a, sum = 0;
    for (i=1;i <= 5;i++){
        printf("Enter number: ");
        scanf("%d",&a);
        if (a < 0){
            puts("Exits loop");
            break; 
        }
        
    sum = sum + a;}

    printf("sum = %d \n",sum);
    return 0;
}