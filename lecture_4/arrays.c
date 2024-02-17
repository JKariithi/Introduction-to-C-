#include <stdio.h>
void add(int array[]);

void main (){
    int fruits[] = {2,4,6,7,8,10,545};
    int i = 0;
    for (; i < 7 ; i++){
       printf("%d \n",fruits[i]);
    }
    add(fruits);
    printf("%d\n",fruits[0]);
    printf("%p\n",fruits);
}
void add(int array[]){
    printf("%p\n",array);
    array [0] = array [0] + 1;

}
//We can see that the addres of array and fruits is the same without use of pointers.
