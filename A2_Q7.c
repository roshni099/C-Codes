//This program is to find whether the given number is perfect number or not.
#include<stdio.h>
int main()
{
	int rosh_i, rosh_n, rosh_sum=0;
	printf("\nEnter the number:");
	scanf("%d", &rosh_n);
	for (rosh_i=1; rosh_i < rosh_n;rosh_i++)
	{
		if (rosh_n % rosh_i==0)
		{
			rosh_sum = rosh_sum + rosh_i;
		}
	}
	if (rosh_sum == rosh_n)
	printf("\nIt is a perfect number");
	else
	printf("\nIt is not a perfect number");
	return 0;
}
