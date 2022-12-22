//This program is to display a format of 4*5 matrix.
#include<stdio.h>
int main()
{
	int std[4][5], i_228, j_228;
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<5;j_228++)
		{
			printf("\nEnter a[%d][%d]: ", i_228, j_228);
			scanf("%d", &std[i_228][j_228]);
		}
	}
	printf("\nThe given matrix is:\n\n");
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<5;j_228++)
		{
			printf("\t%d", std[i_228][j_228]);
		}
		printf("\n\n");
	}
	return 0;
}
