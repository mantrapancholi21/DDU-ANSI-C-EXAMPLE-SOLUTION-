/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 13/09/2026*/

// This is ANSI C book's ch 6 looping's 3rd example//

#include<stdio.h>
int main()
{

// here p = 2^n so it will be a big number so that i've used long int and q = 2^-n so it will need high precision so double is used//

	long int p;
	int n;
	double q;

	printf("_________________________________________________________\n");
	printf("2 to power n\t\tn\t\t2 to power -n\n");
	printf("_________________________________________________________\n");

	p = 1;
	for(n=0;n<21;++n)
	{
// it's for putting the first value to 1 and then the calculations are done //
		if(n==0)
			p = 1;
		else
			p = p * 2;

// p = p*2 21 times so it will be 2^20 //
// q = 1.0/p so it will be 21 times 1/p = 1/2^20 = 2^-20 // 

		q = 1.0/(double)p;
	 
		printf("%10ld     %10d           %20.12lf\n",p,n,q);

	}
	printf("_________________________________________________________\n");
	
	return 0;
}