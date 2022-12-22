//This program is to find the odd numbers and their sum .
#include<stdio.h>
int main()
{
	int rosh_sum=0, rosh_n, rosh_count=0, rosh_i;
	for(rosh_i=0; rosh_i<10; rosh_i++)
	{
		printf("\nEnter the next number:");
		scanf("%d", &rosh_n);
		if (rosh_n%2==1)
		   {
		   	rosh_count++;
		   	rosh_sum+=rosh_n;
		   }
	}
	printf("\nNumber of odd numbers=%d and Sum=%d", rosh_count, rosh_sum);
	return 0;
}
