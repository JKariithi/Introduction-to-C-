#include <stdio.h>
int main (){
    int i;
    for (i=1;i <= 5;i++){
        if (i < 0){
            break;
        }
        printf("Enter number: ");
        scanf("%d",&i);
    }
    return 0;
}