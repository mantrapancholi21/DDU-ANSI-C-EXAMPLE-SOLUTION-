#include<stdio.h>
int main()
{
	int num1=0,num2=1,n,i,fib;
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n-2;i++)
	{
		fib = num1+num2;
		num1 = num2;
		num2 = fib;
	
	}
	
	printf("\nNth fibonacci number (for n = %d) is %d",n,fib);
	
}