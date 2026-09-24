/*
    Author : Meet Yadav
    Branch : DDU IT - SEM 1
    Roll No: 094
*/

#include <stdio.h>

int main()
{
    int i, j, n;

    // Take the size of the multiplication table from the user
    printf("Enter the size of multiplication table: ");
    scanf("%d", &n);

    // Declare a 2D array to store multiplication table values
    int product[n][n];

    // Calculate and store multiplication values in the array
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Calculate product of row and column numbers
            product[i][j] = (i + 1) * (j + 1);
        }
    }

    // Display the title of the multiplication table
    printf("\n");
    printf("============================================\n");
    printf("          MULTIPLICATION TABLE\n");
    printf("============================================\n\n");

    // Print column headings
    printf("      ");

    for (j = 1; j <= n; j++)
    {
        printf("%5d", j);
    }

    printf("\n");

    // Print horizontal separator
    printf("     +");

    for (j = 1; j <= n; j++)
    {
        printf("-----+");
    }

    printf("\n");

    // Display the multiplication table
    for (i = 0; i < n; i++)
    {
        // Print row number
        printf("%3d  |", i + 1);

        // Print multiplication values
        for (j = 0; j < n; j++)
        {
            printf("%5d", product[i][j]);
        }

        printf("\n");
    }

    // Display bottom border
    printf("     +");

    for (j = 1; j <= n; j++)
    {
        printf("-----+");
    }

    printf("\n");

    printf("\n============================================\n");
    printf("          TABLE GENERATED SUCCESSFULLY\n");
    printf("============================================\n");

    return 0;
}