//This program is to check if the given  number is palindrome or not.
#include<stdio.h>
int main()
{
	int rosh_n, rosh_s=0, rosh_d;
	printf("\nEnter the number: ");
	scanf("%d", &rosh_n);
	int rosh_a = rosh_n;
	while (rosh_n!=0)
	{
		rosh_d = rosh_n%10;
		rosh_s = rosh_s*10 + rosh_d;
		rosh_n = rosh_n / 10;
	}
	if (rosh_s == rosh_a)
	printf("\nThe number is a palindrome");
	else
	printf("\nThe number is not a palindrome");
	return 0;
}
