//This program is to find out if the given inputs are sides of a triangle or not
#include<stdio.h>
int main()
{
	int a, b, c, t, s;
	printf("Enter the value of side A: ");
	scanf("%d", &a);
	printf("\nEnter the value of side B: ");
	scanf("%d", &b);
	printf("\nEnter the value of side C: ");
	scanf("%d", &c);
	t = ((a + b) > c)&&((b + c) > a)&&((c + a) > b);
	s = t * (a + b + c);
	printf("\nDo they satisfy triangle property?");
	printf("Display:0 for No, sum of all sides for Yes:%d", s);
	return 0;
}
