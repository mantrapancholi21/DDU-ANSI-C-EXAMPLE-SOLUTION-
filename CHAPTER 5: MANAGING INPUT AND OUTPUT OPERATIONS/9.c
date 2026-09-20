/*----Managing I/O Operations, Example 9----*/

#include<stdio.h>
int main()
{
    /*----Variable Declaration----*/
    int m = 12345;
    long n = 987654;

    printf("Formatted output of integers\n");

    printf("%d\n",m); /*--Prints the integer normally--*/

    printf("%10d\n",m); 
    /* Field width of 10 spaces
        Number is printed Right-aligned 
    */

    printf("%010d\n",m); 
    /* Field width = 10
        0 --> fills the empty spaces with zero
    */

    printf("%-10d\n",m);
    /*  Field width = 10
        minus(-) sign --> Left-aligned the number
    */

    printf("%10ld\n",n);
    /*----Prints a long integer----*/

    printf("%10ld\n",-n);
    /*  Field width = 10
        minus(-) --> Left-aligned the number
    */

    return 0;
}