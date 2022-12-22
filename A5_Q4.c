//This program is find gcd of the two numbers.
#include<stdio.h>
int gcd(int n1, int n2)
{
	return (n1%n2==0 ? n2: gcd(n2,(n1%n2)));
}
int main()
{
	int rosh_g, rosh_a, rosh_b;
	printf("\nEnter the two positive numbers:");
	scanf("%d %d", &rosh_a, &rosh_b);
	rosh_g = gcd(rosh_a,rosh_b);
	printf("\nGCD of the given numbers is:%d", rosh_g);
	return 0;
}
