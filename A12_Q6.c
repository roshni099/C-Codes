//This program is to roundup an integer by two digits.
#include<stdio.h>
int main()
{
		int a, b;
	printf("Enter the first number:");
	scanf("%d", &a);
	printf("\nEnter the second number:");
	scanf("%d", &b);
	if (a<b)
	   {
	   	printf("\nSmallest number:%d", a);
	   }
	else
	   {
	   	printf("\nSmallest number:%d", b);
	   }
}
