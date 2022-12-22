//This program is to find the largest among 3 numbers.
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("\nFirst number:");
	scanf("%d", &a);
	printf("\nSecond number:");
	scanf("%d", &b);
	printf("\nThird number:");
	scanf("%d", &c);
	if (a>b && a>c)
	   {
	   	printf("\nThe largest number is %d", a);
	   }
	else if (b>a && b>c)
	   {
	   	printf("\nThe largest number is %d", b);
	   }
	else if (c>a && c>b)
	   {
	   	printf("\nThe largest number is %d", c);
	   }
	return 0;
}
