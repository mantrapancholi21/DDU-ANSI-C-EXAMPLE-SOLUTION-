/*----Managing I/O Operations, Example 5----*/

#include<stdio.h>
int main()
{

    float x,y; /*----Declaring Float Variables----*/
    double p,q; /*----Declaring Double Variables----*/

    printf("Reading Of Real Numbers.\n");

    printf("Enter two float values for x and y: ");
    scanf("%f %e", &x, &y); /*----Reading Real Numbers----*/

    printf("\n");

    printf("x = %f\ny = %f\n",x,y); /*----Displaying Float Values----*/
    
    printf("Enter two double values for p and q: ");
    scanf("%lf %lf", &p,&q); /*----Reading Double Values----*/

    printf("\n\np = %.12f\nq = %.12e", p ,q);
    /*----Displaying in Decimal and Scientific Notation----*/

    return 0;
}