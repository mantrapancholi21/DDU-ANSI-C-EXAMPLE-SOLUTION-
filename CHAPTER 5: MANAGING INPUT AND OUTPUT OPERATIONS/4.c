/*----Managing I/O Operations, Example 4----*/

#include<stdio.h>
int main()
{

    int a,b,c,x,y,z;
    int p,q,r;

    printf("Enter three integer numbers\n");
    scanf("%d %*d %d", &a,b,&c);
    printf("%d %d %d \n\n",a,b,c);

    printf("Enter Two 4-digit numbers.\n");
    scanf("%2d %4d",&x,&y);
    printf("%d %d\n\n",x,y);

    printf("Enter two integers\n");
    scanf("%d %d",&a,&x);
    printf("%d %d\n\n",a,x);

    printf("Enter a nine-digit numbers\n");
    scanf("%3d %4d %3d", &p,&q,&r);
    printf("%d %d %d",p,q,r);

    printf("Enter a three-digit numbers\n");
    scanf("%d %d", &x,&y);
    printf("%d %d",x,y);

    return 0;
}