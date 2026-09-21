/*Author: Nidhi Kapoor
DDU IT SEM 1
Roll no 076
Date:20/09/26*/

#include<stdio.h>
int main()
{
    //PROGRAM ILLUSTRATRES THE USE OF VARIABLES IN EXPRESSIONS
    float a,b,c,x,y,z;

    a=9; b=12; c=3;

    x = a-b/3 + c * 2 - 1;
    y = a-b/ (3 + c) * (2-1);
    z = a-(b/ (3+c) * 2) - 1;

    printf("x = %f\n" , x);
    printf("y = %f\n" , y);
    printf("z = %f\n" , z);
    
    return 0;


}
