//This program is to check if given number is prime number or not.
#include<stdio.h>
int main()
{
	int rosh_n, rosh_c=0, rosh_i;
	printf("Enter the number: ");
	scanf("%d", &rosh_n);
	for (rosh_i=1;rosh_i<=rosh_n;rosh_i++)
	{
		if (rosh_n%rosh_i==0)
		rosh_c++;
	}
	if (rosh_c == 2)
	   printf("\n%d is a prime number", rosh_n);
	else
	   printf("\n%d is not a prime number", rosh_n);
	return 0;
}
