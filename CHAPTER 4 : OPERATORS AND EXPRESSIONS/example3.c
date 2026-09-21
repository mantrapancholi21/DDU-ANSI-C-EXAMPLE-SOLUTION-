/*Author: Nidhi Kapoor
DDU IT SEM 1
Roll no: 076
Date 20/9/26 */

#include<stdio.h>
int main()
{
// THIS PROGRAM SHOWS USES OF DIFFERENT OPERATORS

int a=15,b = 10,c,d;

//USE OF PRE INCREMENT OPERATOR
c = ++a - b;
printf("a=%d b=%d c=%d\n",a,b,c);

// USE OF POST INCREMENT OPERATOR
d = b++ + a;
printf("a=%d b=%d c=%d\n",a,b,c);

// USE OF DIVISION OPERATOR
printf("a/b = %d\n" , a/b);

// USE OF MODULO OPERATOR
printf("a%b = %d\n");

// USE OF TERNARY OPERATOR
printf("%d\n", (c>d) ? 1 : 0);
printf("%d\n", (c<d) ? 1 : 0);

return 0;
}
