#include <stdio.h>

int conversion(int, int , int);
int main(){
    int fahr , celsius ;
    fahr = 0;
    celsius = conversion(fahr, 300, 20);
    printf("The table of conversion of Farenheit to degree celsius is as shown above \n\n");
    
    return 0;

}
int conversion(int lower, int upper, int step){
    int fahr,celsius;
    fahr = lower ;
    while  (fahr <= upper ){
        celsius = 5*(fahr - 20)/9;
         printf("%d\t%d\n",fahr,celsius);
        fahr += 20;
    }

    return celsius;
}
