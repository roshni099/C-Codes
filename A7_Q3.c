//This program is to find the transpose of a matrix of size 4*4.
#include<stdio.h>
int main()
{
	int a[4][4], i_228, j_228;
	int b[4][4];
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			printf("\nEnter a[%d][%d]: ", i_228, j_228);
			scanf("%d", &a[i_228][j_228]);
		}
	}
	printf("\nThe given matrix is: \n");
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			printf("\t%d", a[i_228][j_228]);
		}
		printf("\n\n");
	}
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			b[j_228][i_228]=a[i_228][j_228];
		}
	}
	printf("\nThe transpose of the given matrix is:\n");
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			printf("\t%d", b[i_228][j_228]);
		}
		printf("\n\n");
	}
	return 0;
}

