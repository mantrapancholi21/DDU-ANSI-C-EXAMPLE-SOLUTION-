/*----Managing I/O Operations, Example 11----*/

#include<stdio.h>
int main()
{
    /*----Variable Declaration----*/
    char x = 'A'; /* Stores character 'A' in variable x */
    char name[20] = "ANIL KUMAR GUPTA";
    /*  Character Array
        Stores upto 19 characters + '\0'
    */

    printf("Printing of Character and Strings\n");

    printf("OUTPUT OF CHARACTERS\n");
    printf("%c\n%3c\n%5c\n",x,x,x);
    /*----Print the character in normal, 3 and 5 spaces width----*/

    printf("%3c\n%c\n",x,x);
    printf("\n");

    printf("OUTPUT OF STRINGS\n");
    printf("%s\n",name); /*--Print the full string--*/
    printf("%20s\n",name); /*--width 20 & Right-aligned--*/
    printf("%20.10s\n",name); /*--width 20 & max 10 characters--*/
    printf("%.5s\n",name); /*--Print max 5 characters--*/
    printf("%-20.10s\n",name); 
    /*--width 20, max 10 characters & Left-aligned--*/
    printf("%5s\n",name); /*--width 5 & Right-aligned--*/

    return 0;
}