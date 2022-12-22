#include<stdio.h>
int main()
{
	int a[4][5];
	int b[4][5];
	int sum[4][5];
	int i, j;
	printf("\nEnter the elements of first matrix: ");
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("\nEnter the element a[%d][%d]: ", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter the elements of second matrix: ");
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("\nEnter the element b[%d][%d]: ", i,j);
			scanf("%d", &b[i][i]);
		}
	}
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nSum of the given matices is :\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("\t%d", sum[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
