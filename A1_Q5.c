//This program is to reverse the given number and find out if it's palindrome.
#include<stdio.h>
int main()
{
	long int rosh_n, rosh_rev_n=0, rosh_org_n;
	printf("Enter the number:");
	scanf("%ld", &rosh_n);
	rosh_org_n=rosh_n;
	do
	{
		rosh_rev_n=rosh_rev_n*10+rosh_n%10;
		rosh_n=rosh_n/10;
	}
	while (rosh_n!=0);
	printf("\nThe reverse number is %ld", rosh_rev_n);
	if (rosh_org_n==rosh_rev_n)
	    printf("\nGiven number is a palindrome");
	else
	    printf("\nGiven number is NOT a palindrome");
	return 0;
}
