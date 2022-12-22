//This program is two find out that given two lines are perpendicular or not.
#include<stdio.h>
int main()
{
	int m1, m2, t;
	printf("Enter the value of first line slope: ");
	scanf("%d", &m1);
	printf("\nEnter the value of second line slope: ");
	scanf("%d", &m2);
	t = ((m1 * m2 * -1)==1);
	printf("\nAre these line perpendicular to each other? ");
	printf("\nDisplay: 1 for Yes, 0 for No:%d", t);
	return 0;
}
