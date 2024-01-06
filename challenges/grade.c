//Using switch case grade the students paper according to their marks
#include <stdio.h>

int main (){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    //switch case statement 
    switch (marks)
    {
        //we introduce the range operator '...' to specify a continuous range of values
    case 80 ... 100:
     printf("A");
        break;
    case 70 ... 79:
     printf("B");
        break;
    case 60 ... 69:
     printf("C");
        break;
    case 35 ... 59:
     printf("D");
        break;
    
    default:
     printf("You have to retake the course \n");
        break;
    }
    return 0;
}