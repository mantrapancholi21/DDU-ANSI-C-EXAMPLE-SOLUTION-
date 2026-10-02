/*
    Program : Multiply the elements of two N*N matrices.
    Author  : Meet Yadav
    Branch  : IT - Semester 1
*/

#include <stdio.h>

int main()
{
    int n, i, j ,k ;

    // Declare matrices
    int A[10][10], B[10][10], product[10][10];

    // Display program title
    printf("\n========================================\n");
    printf("     ELEMENT-WISE MATRIX MULTIPLICATION\n");
    printf("========================================\n");

    // Read the order of matrices
    printf("\nEnter the order of matrix (N x N): ");
    scanf("%d", &n);

    // Input elements of Matrix A
    printf("\nEnter elements of Matrix A:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of Matrix B
    printf("\nEnter elements of Matrix B:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply corresponding elements of both matrices
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            product[i][j] =0;
 
            for(k=0;k<n;k++)
            {
              product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Matrix A
    printf("\n----------------------------------------\n");
    printf("              MATRIX A\n");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    // Display Matrix B
    printf("\n----------------------------------------\n");
    printf("              MATRIX B\n");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }

    // Display the final product matrix
    printf("\n----------------------------------------\n");
    printf("          PRODUCT MATRIX\n");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", product[i][j]);
        }
        printf("\n");
    }

    // End of program
    printf("\n========================================\n");
    printf("       Multiplication Completed!\n");
    printf("========================================\n");

    return 0;
}