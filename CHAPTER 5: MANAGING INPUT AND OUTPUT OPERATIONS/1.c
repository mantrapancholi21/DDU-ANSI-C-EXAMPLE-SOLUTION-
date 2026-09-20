/*----Managing I/O Operations, Example 1----*/

#include<stdio.h>
int main()
{
    /*----Variable Declaration----*/
    char answer;

    printf("Use of getchar to read a charcter from keyboard.\n");

    printf("Would you like to know my name?\n");

    printf("Type Y for Yes and N for No: ");

    /*-----Reading A Character----*/
    answer = getchar();

     /*----Checking User's Input----*/
    if(answer == 'Y' || answer == 'y')
        printf("\nMy Name is Busy BEE\n");

    else
        printf("\n\nYou are good for nothing.\n");

    return 0;
}