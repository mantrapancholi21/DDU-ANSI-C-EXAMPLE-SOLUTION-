/*----Sample Program 4: Use Of Subroutines----*/

#include<stdio.h>
    /*----Program Using Function----*/
    int mul ( int a, int b ); /*----Declaration----*/

/*----Main Program Begins----*/
int main()
{
    int a,b,c;
    a = 5;
    b = 10;
    c = mul (a,b);

    printf("Multiplication of %d and %d is %d",a,b,c);

    return 0;
}

    /*----Main Program Ends----*/
    /*----MUL() Function Starts----*/

    int mul ( int x, int y)
    {
        int p;
    
        p = x*y;
        return(p);
    }

    /*----MUL() Function Ends----*/