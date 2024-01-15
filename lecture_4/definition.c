#include <stdio.h>
//no need to specify the parameter 

float sub(float,float);

void main (){
    //calling just needs the arguement
    sub(67,83);
    printf("hello \n");
}
//definition requires data type and nam 
float sub(float a , float b){
    float sub = 0 ;
    if (a > b){
       sub = a - b;
    }
    else{
        sub = b - a;
    }
   printf("sub = %f \n",sub);
}