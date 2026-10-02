/*
    Program : Transpose of a Square Matrix
    Author  : Meet Yadav
    Branch  : IT - Semester 1
*/

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int transpose[10][10];
    int n, i, j;

    // Taking the order of square matrix
    printf("====================================\n");
    printf("      TRANSPOSE OF A MATRIX\n");
    printf("====================================\n");

    printf("Enter the order of matrix : ");
    scanf("%d", &n);

    // Taking matrix elements
    printf("\nEnter the elements of matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding transpose
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    // Display transpose matrix
    printf("\nTranspose Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}