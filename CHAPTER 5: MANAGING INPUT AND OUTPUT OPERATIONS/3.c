/*----Managing I/O Operations, Example 3----*/

#include<stdio.h>
#include<ctype.h>
/*---- ctype.h is Header File for Character Testing Functions----*/
int main()
{
    char alphabet; /*----Variable Declaration----*/
    
    printf("Reading an Writing an Alphabets in Reverse Cast.\n");

    printf("Enter an alphabet.");

    putchar('\n'); /*----Move to next line----*/

    alphabet = getchar(); /*----Reading an Alphabet----*/

    if( islower(alphabet) ) 
    /*----islower --> Check whether character is lowercase----*/
        putchar( toupper(alphabet) ); 
        /*----Converting to Uppercase and Display----*/

    else
        putchar( tolower(alphabet) ); 
        /*--tolower --> Converts a character to Lowercase & Display--*/

    return 0;
}