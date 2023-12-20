// The code below shows how we use multiple operators in a given function
// We also us parenthesis to our advantage 
// The original was double ans = 10.0 + 2.0 /3.0 - 2.0 * 2.0;
// by use of parenthesis our value is now 11


#include <stdio.h>

int main(){
    double ans = 10.0 + 2.0/((3.0 - 2.0 )*2.0);

    printf("answer is : %lf \n " , ans);

    return 0;
}
// challenge:
//  rearrange the parenthesis to give a value of 8.
