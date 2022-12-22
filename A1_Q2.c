//This program is to display a pattern.
#include<stdio.h>
int main()
{
	int rosh_n, rosh_i, rosh_j;
	rosh_n=7;
	for (rosh_i=0;rosh_i<rosh_n;rosh_i++)
	{
		for (rosh_j=0;rosh_j<rosh_n-rosh_i;rosh_j++)
		printf("A");
		
		for (rosh_j=0;rosh_j<rosh_i;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<rosh_n-rosh_i;rosh_j++)
		printf("A");
		
		for (rosh_j=0;rosh_j<rosh_i;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<rosh_n-rosh_i;rosh_j++)
		printf("A");
		
		for (rosh_j=0;rosh_j<rosh_i;rosh_j++)
		printf(" ");
	printf("\n");
	}
	return 0;
}
