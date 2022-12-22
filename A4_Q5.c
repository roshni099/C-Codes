//This program is to find out if the given no.is leap year or not.
#include<stdio.h>
int leap (int year)
{
	if(year%400==0)
	{
		return 1;
	}
	else if (year%100==0)
	{
		return 0;
	}
	else if (year%4==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main ()
{
	int rosh_i, rosh_a=0;
	printf("\nEnter the year:");
	scanf("%d", &rosh_i);
	rosh_a=leap(rosh_i);
	if (rosh_a==1)
	printf("\nIt's a Leap Year");
	else
	printf("\nIt's NOT a Leap Year");
	return 0;
}
