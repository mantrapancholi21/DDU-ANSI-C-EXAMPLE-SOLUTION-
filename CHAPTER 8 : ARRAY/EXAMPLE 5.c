/*
    Program: Salesgirl and Item Total
    Author : Meet Yadav
    DDU IT - SEM 1
*/

#include <stdio.h>

#define MAXGIRLS 4
#define MAXITEMS 3

int main()
{
    int value[MAXGIRLS][MAXITEMS];
    int girl_total[MAXGIRLS];
    int item_total[MAXITEMS];
    int i, j, grand_total;

    // Input matrix
    printf("\n========== INPUT DATA ==========\n");

    for (i = 0; i < MAXGIRLS; i++)
    {
        girl_total[i] = 0;

        for (j = 0; j < MAXITEMS; j++)
        {
            printf("Enter value [%d][%d]: ", i, j);
            scanf("%d", &value[i][j]);

            // Calculate row total
            girl_total[i] += value[i][j];
        }
    }

    // Calculate column totals
    for (j = 0; j < MAXITEMS; j++)
    {
        item_total[j] = 0;

        for (i = 0; i < MAXGIRLS; i++)
        {
            item_total[j] += value[i][j];
        }
    }

    // Calculate grand total
    grand_total = 0;

    for (i = 0; i < MAXGIRLS; i++)
    {
        grand_total += girl_total[i];
    }

    // Display input matrix
    printf("\n========== SALES MATRIX ==========\n");

    printf("             Item 1   Item 2   Item 3\n");

    for (i = 0; i < MAXGIRLS; i++)
    {
        printf("Salesgirl %d  ", i + 1);

        for (j = 0; j < MAXITEMS; j++)
        {
            printf("%8d", value[i][j]);
        }

        printf("\n");
    }

    // Display row totals
    printf("\n========== GIRLS TOTALS ==========\n");

    for (i = 0; i < MAXGIRLS; i++)
    {
        printf("Salesgirl %d : %d\n", i + 1, girl_total[i]);
    }

    // Display column totals
    printf("\n========== ITEM TOTALS ==========\n");

    for (j = 0; j < MAXITEMS; j++)
    {
        printf("Item %d : %d\n", j + 1, item_total[j]);
    }

    printf("\n----------------------------------\n");
    printf("Grand Total : %d\n", grand_total);
    printf("----------------------------------\n");

    return 0;
}