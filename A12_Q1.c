//This program is to find the smallest among 4 numbers.
#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("Enter the four numbers:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a<b && a<c && a<d)
	{
		printf("\nthe smallest number is:%d",a);
	}
	else if (b<a && b<c && b<d)
	{
		printf("\nThe smallest number is: %d", b);
	}
	else if (c<a && c<b && c<d)
	{
		printf("\nThe smallest number is: %d", c);
	}
	else
	{
		printf("\nThe smallest number is: %d", d);
	}
	return 0;
}
