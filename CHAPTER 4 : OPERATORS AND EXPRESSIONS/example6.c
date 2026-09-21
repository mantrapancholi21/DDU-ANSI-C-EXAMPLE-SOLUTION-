/*Author: Nidhi Kapoor
DDU IT SEM1
Roll no 076
Date 21/9/26*/

//PROGRAM TO COMPUTE SUM OF N TERMS OF 1/n
#include<stdio.h>
int main()
{
    float sum;
    int i, n;
    sum = 0;

    printf("Enter the value of number of terms to be add: ");
    // This will take the input from the user for number of turns to be added.
    scanf("%d", n);

    
    //This loop will run n times that is given input by user.
    for(i=1; i<=n; i++)
    {
        // To have an answer in float one of the term is converted to float.
        sum = sum + 1.0/i;
        
    }

    printf("Sum %f", sum);
    return 0;
}






