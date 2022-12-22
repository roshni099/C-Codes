//This program is to find the value of a raised to the power b.
#include<stdio.h>
int power(int a, int b)
{
	if (b==1)
	return (a);
	else
	return (a*power(a,b-1));
}
int main()
{
	int rosh_x, rosh_y, rosh_p;
	printf("\nEnter the value of a: ");
	scanf("%d", &rosh_x);
	printf("\nEnter the value of b: ");
	scanf("%d", &rosh_y);
	rosh_p = power(rosh_x,rosh_y);
	printf("\nResult:%d", rosh_p);
	return 0;
}
