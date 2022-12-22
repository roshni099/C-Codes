//This program is to find the gcd of 3 given numbers.
#include<stdio.h>
int gcd(int n1, int n2)
{
	int t;
	return(n1%n2?t=gcd(n2,n1%n2):n2);
}
int main()
{
	int rosh_p, rosh_q, rosh_r, rosh_g, rosh_a;
	printf("\nEnter three numbers: ");
	scanf("%d %d %d", &rosh_p, &rosh_q, &rosh_r);
	rosh_g = (rosh_p>rosh_q?gcd(rosh_p,rosh_q):gcd(rosh_q,rosh_p));
	rosh_a = (rosh_g>rosh_r?gcd(rosh_g,rosh_r):gcd(rosh_r,rosh_g));
	printf("\nThe GCD of the given numbers is %d", rosh_a);
	return 0;
}
