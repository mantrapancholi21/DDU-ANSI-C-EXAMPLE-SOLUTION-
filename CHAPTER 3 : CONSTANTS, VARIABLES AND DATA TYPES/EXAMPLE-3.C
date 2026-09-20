//chapter 3
//example 3.3
/* this program is shows typical declarations,assignments and values stored 
in various types of variables. */

#include <stdio.h>
int main()
{
    /*-----------declarations---------------*/
    float x,p;
    double y,q;
    unsigned k;

    /*----------declarations and assignments--------*/
    int m=54321;
    long int n=1234567890;

    /*----------assignments---------*/
    x = 1.234567890000;
    y = 9.87654321;
    k = 54321;
    p = q = 1.0;

    /*----------printing----------*/
    printf("m = %d\n",m);
    printf("n = %ld\n",n);
    printf("x = %.12lf\n",x);
    printf("x = %f\n",x);
    printf("y = %.12lf\n",y);
    printf("y = %lf\n",y);
    printf("k = %u  p = %f  q = %.12lf\n",k,p,q);

    return 0;
}
