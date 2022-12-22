//This program is to count the no. of digits in the given number.
#include<stdio.h>
int count(int n)
{
	if (n/10==0)
	return(1);
	else
	return(n/10==0?1:1+count(n/10));
}
int main()
{
	int rosh_a, rosh_s;
	printf("\nEnter the number: ");
	scanf("\n%d", &rosh_a);
	rosh_s = count(rosh_a);
	printf("\nNo. of digits:%d", rosh_s);
	return 0;
}
