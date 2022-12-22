//This program is to find whether given year is a leap year or not.
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d", &year);
	if (year%400 == 0)
	{
		printf("\nIt is a leap year");
	}
	else if (year%100 == 0)
	{
		printf("\nIt is not a leap year");
	}
	else if (year%4 == 0)
	{
		printf("\nIt is a leap year");
	}
	else
	{
		printf("\nIt is not a leap year");
	}
	return 0;
}
