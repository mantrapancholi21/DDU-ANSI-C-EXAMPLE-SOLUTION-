/*----Sample Program 5: Use Of Math Functions----*/

#include<stdio.h>
/*----Program using cosine function----*/
#include<math.h>
#define PI 3.1416
#define MAX 180

int main()
{
    /*----Variable Declaration----*/
    int angle;
    float x,y;

    angle = 0; /*----Initial Value----*/

    printf("Angle cos(angle)\n\n");

    while(angle <= MAX) /*--Calculate cos(angle) from 0° to 180°--*/
    {
        x = (PI/MAX) * angle; /*--Convert angle from degree to radian--*/
        y = cos(x); 

        printf("%15d %13.4f\n",angle,y);

        angle = angle + 10; /*--Increase angle by 10° for the next calculation--*/
    }

    return 0;
}