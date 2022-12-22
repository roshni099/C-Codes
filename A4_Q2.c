//This program is to find out the largest number.
#include<stdio.h>
int largest(int n)
{
	int next_num, largest=0, i;
	for (i=0;i<n;i++)
	{
		printf("\nEnter next number:");
		scanf("%d", &next_num);
		if (next_num > largest)
		    largest = next_num;
	}
	return (largest);
}
int main()
{
	int a=largest(6);
	printf("\nLargest number is %d", a);
	return 0;
}
