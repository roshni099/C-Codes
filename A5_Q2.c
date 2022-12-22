//This program is find the sum of the given k digit number.
#include<stdio.h>
int sod(int n)
{
	return(n/10 ? n%10+sod(n/10):n);
}
int main()
{
	int rosh_a,rosh_s;
	printf("\nEnter the number: ");
	scanf("%d", &rosh_a);
	rosh_s = sod(rosh_a);
	printf("\nSum of the digits:%d", rosh_s);
	return 0;
}
