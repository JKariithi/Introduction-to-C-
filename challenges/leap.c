
//This code was to check if a year is a leap year or a common year using conditions

#include <stdio.h>
int main()
{
  int year;

  printf("Enter year ");
  scanf("%d",&year);
    /*
     * If year%4==0 and year%100==0 then
     *     print leap year
     * else if year%400==0 then
     *     print leap year
     * else
     *     print common year 
     */
    (year%4==0 && year%100!=0) ? puts("LEAP YEAR") :
        (year%400 ==0 ) ? puts("LEAP YEAR") : puts("COMMON YEAR");  
        
    return 0;
//What I learn is how to use mod operator.
}