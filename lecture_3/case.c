#include <stdio.h>
// example of a switch statement this complies faster than an if else 
//statement plus it is easy to read and understand it.

int main (){
  
  int a;
  printf("a: ");
  scanf("%d",&a);
//(a) this is the expression 
  switch (a)
  {
    //the folllowing are the different cases 
    // case 27: means a = 27 then do what follows 
  case 27: 
    printf("Janice \n");
    break;
     //if a = 27 and there is no break all of the cases will
     // be printed out plus default 
  case 225: 
   printf("Jerry \n");
   //default means if the particular case is not defined do the following
   case 45:
    printf("Sophie \n");
  default://The default value doesn't have to be here can be at the begin too
  printf("Janice and Jerry \n");
    break;
  }

    return 0;
}