/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 13/09/2026*/

// This is ANSI C book's ch 6 looping's 1st example//

#include<stdio.h>
int main()
{
	int count,n;
	float x,y;

/* to find y = x^n 
   we have to multiply x n times for that loops are executing n times 
   n is the user input and for multiplying x we have created another variable called count */	

	printf("Enter value of x: ");
	scanf("%f",&x);

	start:

	printf("Enter value of n: ");
	scanf("%d",&n);
// here n is in the x's exponent so n cannot be a negative number //
	{
		printf("Value for n cannot be negative plase try again!!!!\n");
		goto start;
	}

/* here attention please guys !! when user will  input any negative number the program wil only run in if part and the code will be terminated 
 to prevent that happening i have used "goto" statement it will print the warning and will make the cursor to go at start label 
 and from there code will not terminate it will continue to take inputs infinite times unless you make n positive */

	else
	{
		y = 1.0;
		count = 1;

		while(count <= n)
		{
			y = y * x;
			count++;
		}
		
		printf("\nX = %f;  n = %d;  X to power n = %f\n",x,n,y);


	}
	return 0;
}


