/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 13/09/2026*/

// This is ANSI C book's ch 6 looping's 2nd example//

#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
int main()
{
	int row,column,y;
	row = 1;
// here COLMAX is the number of columns //
// and ROWMAX is the number of rows //
	printf("\t\t\t\t\tMULTIPLICATION TABLE");
	printf("\n\t\t______________________________________________________________________________\n\n\t");

// this underscore lines are just for making a formatted table output you can ignore them //
// in the while loop to multiply i have multiply rows into columns it will make table //

	while(row <= ROWMAX)
	{
		column = 1;

		while(column <= COLMAX)
		{
			y = row * column;
			printf("\t%4d",y);
			column += 1;	
		}
		printf("\n\t");
		row = row + 1;
		
	}
	printf("\t_______________________________________________________________________________\n");
	return 0;
}
