//This program is to find out, if the given lines are parallel to each other.
#include<stdio.h>
int main()
{
	int m1, m2, p;
	printf("Enter the value of first Slope: ");
	scanf("%d", &m1);
	printf("\nEnter the value of second Slope: ");
	scanf("%d", &m2);
	p = (m1==m2);
	printf("\nAre they parallel to each other?");
	printf("\nDisplay: 1 for Yes, 0 for No: %d", p);
	return 0;	
}
