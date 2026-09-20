/*----Managing I/O Operations, Example 6----*/

#include<stdio.h>
int main()
{
    /*----Variable Decclaration----*/
    int no; // no = number
            /*----It stores the SERIAL NUMBER----*/    

    char name1[15], name2[15], name3[15];
    /*----Character arrays to store three different names----*/
    /*----Each can store upto 14 characters + '\0'(Null Character)----*/

    printf("Reading Of Strings.\n");

    printf("Enter Serial Number and Name One.\n");
    scanf("%d %14c", &no, name1);
    printf("%d %14s\n\n",no, name1);
    /*  
        %d --> Reads an integer
        %14s --> String input:
                Reads UP TO 14 non-whitespace characters.
                Stops when whitespace is encountered.

        %14c --> Character input:
                 Reads EXACTLY 14 characters.
                Whitespace (spaces, tabs, etc.) is also counted.
                Therefore, it waits until 14 characters are entered.

    */

    printf("Enter Serial Number and Name Two.\n");
    scanf("%d %s", &no, name2);
    printf("%d %14s\n\n",no, name2);

    printf("Enter Serial Number and Name Three.\n");
    scanf("%d %14s", &no, name3);
    printf("%d %14s\n\n",no,name3);

    return 0;
}
