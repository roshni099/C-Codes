//This program is to display a pattern.
#include<stdio.h>
int main()
{
	int rosh_i, rosh_n, rosh_j, rosh_y;
	rosh_n=5;
	rosh_y=4;
	for (rosh_i=0;rosh_i<rosh_n;rosh_i++)
	{
		for (rosh_j=0;rosh_j<2*rosh_i+1;rosh_j++)
		printf("$");
		
		for (rosh_j=0;rosh_j<2*rosh_n-2*rosh_i-2;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<2*rosh_i+1;rosh_j++)
		printf("$");
		
		for (rosh_j=0;rosh_j<2*rosh_n-2*rosh_i-2;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<2*rosh_i+1;rosh_j++)
		printf("$");
	printf("\n");
	}
	for (rosh_i=0;rosh_i<rosh_y;rosh_i++)
	{
		for (rosh_j=0;rosh_j<2*rosh_y-2*rosh_i-1;rosh_j++)
		printf("$");
		
		for (rosh_j=0;rosh_j<2*rosh_i+2;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<2*rosh_y-2*rosh_i-1;rosh_j++)
		printf("$");
		
		for (rosh_j=0;rosh_j<2*rosh_i+2;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<2*rosh_y-2*rosh_i-1;rosh_j++)
		printf("$");
	printf("\n");
	}
	return 0;
	
}
