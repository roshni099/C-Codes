//This program is to find the number of leaders.
#include<stdio.h>
int leader(int n)
{
	int next, count=0, largest=0, i;
	for (i=0;i<n;i++)
	{
		printf("\nEnter the next number:");
		scanf("%d", &next);
		if (next > largest)
		{
			count++;
		}
	}
	return (count);
}
int main()
{
	int a = leader(4);
	printf("\nNo. of leaders: %d", a);
	return 0;
}
