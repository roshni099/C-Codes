//This program is to add two numbers using parameters.
#include<stdio.h>
int sum(int a, int b)
{
	return (a+b);
}
int main()
{
	int rosh_c, rosh_b, rosh_d=0;
	printf("Enter the numbers: ");
	scanf("%d %d", &rosh_c, &rosh_d);
	rosh_d = sum(rosh_c,rosh_d);
	printf("Sum:%d",rosh_d);
	return 0;
}
