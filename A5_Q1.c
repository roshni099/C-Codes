//This program is to find the factorial by using recursive function.
#include<stdio.h>
int factorial(int n)
{
	if (n==1)
	return(1);
	else 
	return (n*factorial(n-1));
}
int main()
{
	int rosh_a, rosh_fact;
	printf("\nEnter number: ");
	scanf("%d", &rosh_a);
	rosh_fact= factorial(rosh_a);
	printf("\nFactorial value:%d", rosh_fact);
	return 0;
}

