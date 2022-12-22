//This program is to display the prime numbers in a specific range.
#include<stdio.h>
int main()
{
	int rosh_low, rosh_high, rosh_i, rosh_j, rosh_flag;
	printf("\nEnter the two intervals: ");
	scanf("%d %d", &rosh_low, &rosh_high);
	printf("\nPrime no present in between %d and %d\n", rosh_low, rosh_high);
	for (rosh_i = rosh_low+1 ; rosh_i<rosh_high; rosh_i++)
	{
		rosh_flag=0;
		for (rosh_j=2;rosh_j<=rosh_i/2;++rosh_j)
		{
			if (rosh_i%rosh_j==0)
			{
				rosh_flag=1;
				break;
			}
		}
		if (rosh_flag == 0)
		   printf("%d\n", rosh_i);
	}
	return 0;
}
