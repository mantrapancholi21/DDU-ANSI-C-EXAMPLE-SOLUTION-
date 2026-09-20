/*----Managing I/O Operations, Example 7----*/

#include<stdio.h>
int main()
{

    char address[80];
    /*
        Character Array
        'address' can store upto 79 characters +'\0'
    */

    printf("To check the coversion specification%[] for strings.\n");

    printf("Enter Address\n");
    scanf("%[a-z]",address);
    /*--Read characters only if they are lowercase letters a through z--*/

    printf("%-80s\n\n",address);
    /*
        Prints the string in the field of 80 characters,
        with the text left-aligned.
    */
    
    return 0;
}