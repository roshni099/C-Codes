//This program is to display the pattern.
#include<stdio.h>
int main()
{
	int rosh_i, rosh_n, rosh_j, rosh_y;
	rosh_n=5;
	rosh_y=4;
	for (rosh_i=0;rosh_i<rosh_n;rosh_i++)
	{
		for (rosh_j=0;rosh_j<rosh_n-rosh_i-1;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<2*rosh_i+1;rosh_j++)
		printf("%d", rosh_i+1);
		
		for (rosh_j=0;rosh_j<rosh_n-rosh_i-1;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<rosh_n-rosh_i-1;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<2*rosh_i+1;rosh_j++)
		printf("%d", rosh_i+1);
	printf("\n");
	}
	for (rosh_i=0;rosh_i<rosh_y;rosh_i++)
	{
		for (rosh_j=0;rosh_j<rosh_i+1;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<2*rosh_y-2*rosh_i-1;rosh_j++)
		printf("%d", rosh_y-rosh_i);
		
		for (rosh_j=0;rosh_j<rosh_i+1;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<rosh_i+1;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<2*rosh_y-2*rosh_i-1;rosh_j++)
		printf("%d", rosh_y-rosh_i);
	printf("\n");
	}
}
