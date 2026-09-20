/*----Managing I/O Operations, Example 8----*/

#include<stdio.h>
int main()
{

    int a;
    float b;
    char c;

    printf("Detection of errors in scanf input\n");

    printf("Enter integer value of a, float value of b and character c\n");

    if ( scanf("%d %f %c", &a, &b, &c) == 3 )
        printf("a = %d b = %f c = %c\n",a, b, c);
    /*
        %d --> Reads integer value
        %f --> Reads float value
        %c --> Reads character
        If all 3 values are read successfully --> True
        Otherwise --> False 
    */

    else
        printf("Error in input.\n");

    return 0;
}