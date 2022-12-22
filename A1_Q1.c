//This program is to display the pattern.
#include<stdio.h>
int main()
{
	int rosh_i, rosh_n, rosh_j;
	rosh_n=5;
	for (rosh_i=0;rosh_i<rosh_n;rosh_i++)
	{
		for (rosh_j=0;rosh_j<rosh_n-1-rosh_i;rosh_j++)
		printf(" ");
	
		for (rosh_j=0;rosh_j<2*rosh_i+1;rosh_j++)
		printf("$");
		
		for (rosh_j=0;rosh_j<rosh_n-1-rosh_i;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<rosh_n-1-rosh_i;rosh_j++)
		printf(" ");
		
		for (rosh_j=0;rosh_j<2*rosh_i+1;rosh_j++)
		printf("$");
	printf("\n");
    }
    return 0;
	
}
