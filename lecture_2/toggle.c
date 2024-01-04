//This code is for toggling or invert the nth bit of a number 
//Toggling means if the bit was set it is inverted/ converted to be not set and
// vice versa 
// let's get started ! 
#include <stdio.h>
int main (){
 int num,n,Newnum;

 // First we input the number and toggle to the user 
 //the number 
 printf("Enter a number: ");
 scanf("%d",&num);

 //the nth term 
 printf("Enter the nth term (0-31): ");
 scanf("%d",&n);

 //Toggling
 // this is done by the XOR operator and this is how  it works 
 // a = 1010
// b =  1111
// a ^ b will give 
//   1010
// ^ 1111
//   _____
//   0101
// as you can see the bit that was on set was converted to not set and vice versa

 Newnum = num ^ (1 << n );

 printf("The number inputed: %d \n ",num);
 printf("The nth term inputed: %d\n",n);
 printf("The new number obtained: %d \n",Newnum);
 printf("this is in decimal \n\n");
//let's say 15 was the number we inputed 
//then in binary it is 1111
//the nth term we inputed is 1 
//we shift 1 to the left by one in order to toggle it 
//so what we have is ....
// 1111
// ^ 10
// ____
// 1101 ---> in decimal this is 13

    return 0;
}