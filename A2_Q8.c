//This program is to find the reverse of a number.
#include<stdio.h>
int main()
{
	int rosh_n, rosh_rev=0, rosh_r;
	printf("\nEnter the number:");
	scanf("%d", &rosh_n);
	while(rosh_n!=0)
	{
		rosh_r = rosh_n%10;
		rosh_rev = rosh_rev*10 +rosh_r;
		rosh_n/=10;
	}
	printf("\nReversed number: %d", rosh_rev);
	return 0;
}
