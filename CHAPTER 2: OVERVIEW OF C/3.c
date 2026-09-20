/*----Sample Program 3: Interest Calculation----*/

#include<stdio.h>
/*-----Investment Problem-----*/
#define PERIOD 10
#define PRINCIPAL 5000.00

/*----Main Program Begins----*/
int main()
{
    /*----Declaration Statements----*/
    int year;
    float amount, value, inrate;

    printf("-----Investment Problem Program-----\n");

    /*----Assignment Statements----*/
    amount = PRINCIPAL; /*--Store the initial investment--*/
    inrate = 0.11; /*--Store the interest rate--*/
    year = 0; /*--Start counting from year 0--*/

    /*----Computation Statements----*/
    /*----Computation Using WHILE Loop----*/
    while(year <= PERIOD) /*--Repeat the calculation until 10 years are completed--*/
    {
        printf("%2d %8.2f\n", year,amount);
        value = amount + inrate * amount;
        year = year + 1;
        amount = value;
    }
    /*----WHILE Loop Ends----*/

    return 0;
}

    /*----Program Ends----*/