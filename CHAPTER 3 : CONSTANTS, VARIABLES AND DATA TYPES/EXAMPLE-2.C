// chapter 3
// example 3.2
// this program is to find that entered number is lesser or greater than 100.

#include <stdio.h>
int main()
{
    int number;

    // To scaning value of number from user.
    printf("enter the number : \n");
    scanf("%d", &number);

    //for checking conditions.
    if(number < 100)
        printf("your number is smaller than 100.\n\n");
    else
        printf("your number contains more than 2 digits.\n");

        return 0;
}
