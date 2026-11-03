#include<stdio.h>
#define DISTINCTION 450
#define FIRST 360
#define SECOND 240
#define PASS 140
void main()
{
	int n,m,i,j;
	int roll_number,marks,total;

	printf("Enter total number of students: ");
	scanf("%d",&n);
	

	for(i=0;i<n;i++)
	{
		printf("\nEnter Roll No:- ");
		scanf("%d",&roll_number);
		total = 0;
		
		printf("\nEnter marks of %d subjects for Roll NO:- %d\n",m,roll_number);
		for(j=0;j<5;j++)
		{
			printf("Enter marks of subject %d(out of 100): ",j+1);
			scanf("%d",&marks);
			total += marks;
		}
		printf("TOTAL MARKS: %d",total);
		if(total >= DISTINCTION)
			printf("( Distinction )\n");
		else if(total >= FIRST)
			printf("( First class )\n");
		else if(total >= SECOND)
			printf("( Second class )\n");
		else if(total >= PASS)
			printf("( Pass class )\n");
		else
			printf("( ***FAIL*** )\n");
	}

}