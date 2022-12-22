//This program is to find the largest among 4 numbers.
#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("\nEnter the four number:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a>b && a>c && a>d)
	   {
	   	printf("\nLargest number: %d", a);
	   }
	else if (b>a && b>c && b>d)
	   {
	   	printf("\nLargest number: %d", b);
	   }
	else if (c>a && c>b && c>d)
	   {
	   	printf("\nLargest number: %d", c);
	   }
	else
	   {
	   	printf("\nLargest number: %d", d);
	   }
	return 0;
}
