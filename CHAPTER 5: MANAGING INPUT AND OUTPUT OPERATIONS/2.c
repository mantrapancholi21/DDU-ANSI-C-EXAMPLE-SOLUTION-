/*----Managing I/O Operations, Example 2----*/

#include<stdio.h>
#include<ctype.h>
/*---- ctype.h is Header File for Character Testing Functions----*/
int main()
{
    char character;

    printf("-----Program to test the Character Type.\n-----");
    printf("Press any key.\n");

    character = getchar(); /*----Reading a Character----*/

    if( isalpha(character) > 0 ) /*----Test for letter----*/
        printf("The character is a letter.\n");

    else
        if( isdigit(character) > 0 ) /*----Test for digit----*/
            printf("The character is a digit.\n");
        
        else
            printf("The character is not alphanumeric.\n");
            /* Here Alphanumeric means: 
            "Character is neither a letter nor a digit" */

    return 0;
}