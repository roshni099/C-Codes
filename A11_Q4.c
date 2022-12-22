//This program is to check if the given input are the sides of a right angle triangle or not.
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("Enter the value of side A: ");
	scanf("%d", &a);
	printf("\nEnter the value of side B: ");
	scanf("%d", &b);
	printf("\nEnter the value of side C: ");
	scanf("%d", &c);
	t = ((b*b+c*c==a*a))||((c*c+a*a==b*b))||((a*a+b*b==c*c));
	printf("\nAre they sides of a right angle triangle?");
	printf("\nDisplay: 1 for Yes, 0 for No: %d", t);
	return 0;
}
