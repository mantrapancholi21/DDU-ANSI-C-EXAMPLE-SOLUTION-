/*Author: Nidhi Kapoor
DDU IT SEM 1
Roll no: 076
Date: 20/9/26 */

#include<stdio.h>
int main()
{
// This program is to convert given days into months and days.
// m = months, d = days, od = original days

int m,d;
printf("Enter the number of days");

// This would take the input from the user to enter the number of days.
scanf("%d",&d);
od = d;

//This given number of days are divided by 30 to get mumber of months.
m = d/30;

/*The given number of days are updated by performing modulo to get left over days.*/
d = d % 30;

printf("For %d days the number of months = %d and days = %d", od,m,d);

return 0;
}
