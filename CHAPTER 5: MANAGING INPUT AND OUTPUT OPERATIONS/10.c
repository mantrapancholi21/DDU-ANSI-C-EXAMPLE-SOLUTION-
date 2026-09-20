/*----Managing I/O Operations, Example 10----*/

#include<stdio.h>
int main()
{

    float y = 98.7654;

    printf("To demonstrate different ways of Formatted Output of Real Numbers.\n");

    printf("%7.4f\n",y);
    /*  width 7
        Print the value with 4 digit after decimal
    */

    printf("%f\n",y);

    printf("%7.2f\n",y);

    printf("%-7.2f\n",y); 
    /*  width 7 & 2 digit after decimal
        minus(-) sign --> Left aligned
    */

    printf("%07.2f\n",y);
    /*----width 7 & Print 2 digits after decimal & Zero Padding----*/
    
    printf("%*.*f",7,2,y);
    /*  First * = width 7
        Second * = 2 digits after decimal 
    */

    printf("\n");

    printf("%10.2e\n",y);

    printf("%12.4e\n",-y);

    printf("%-10.2e\n",y);
    /*  width 10 & Print 2 digits after decimal
        minus(-) sign --> Left aligned
    */

    printf("%e\n",y); /*----Default scientific notation----*/

    return 0;
}