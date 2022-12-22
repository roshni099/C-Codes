//This program is to find the minimum of given three numbers.
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a<b && a<c)
	{
		printf("\nThe smallest number is:%d", a);
	}
	else if (b<a && b<c)
	{
		printf("\nThe smallest number is:%d", b);
	}
	else 
	{
		printf("\nThe smallest number is:%d", c);
	}
	return 0;
	
}
