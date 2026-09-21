/* Author: Nidhi Kapoor
   DDU IT SEM 1
   Roll no: 076
   Date: 20/9/26*/
#include<stdio.h>

// The values of A and N are fixed.
#define N 100
#define A 2
int main()
{
   int a;
   a = A;
   while(a<N)
   {
      printf("%d\n",a);
      a*=a;
   }
return 0;

}