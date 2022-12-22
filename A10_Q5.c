//The program  is to find that the given three numbers are sides of triangle or not.
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("Enter the value of side A:");
	scanf("%d", &a);
	printf("\nEnter the value of side B:");
	scanf("%d", &b);
	printf("\nEnter the value of side C:");
	scanf("%d", &c);
	t = ((a + b) > c)&&((b + c) > a)&&((c + a) > b);
	printf("Do the satisfy triangle property?1 for Yes, 0 for No : %d", t);
	return 0;
}
