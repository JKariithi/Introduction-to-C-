#include <stdio.h>

float conversion(float, float , float);
float main(){
    float fahr , celsius ;
    fahr = 0;
    celsius = conversion(fahr, 300, 20);
    printf("The table of conversion of Farenheit to degree celsius is as shown above \n\n");
    
    return 0;

}
float conversion(float lower, float upper, float step){
    float fahr,celsius;
    fahr = lower ;
    while  (fahr <= upper ){
        celsius = 5.0*(fahr - 32.0)/9.0;
         printf("%3.0f\t%3.2f\n",fahr,celsius);
        fahr += 20;
    }

    return celsius;
}
