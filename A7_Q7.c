//This program is to multiply (i+j) to matrix(4*4) and count the number of odds in the diagonal matrix.
#include<stdio.h>
int main()
{
	int std[4][4], i_228, j_228;
	int c_228=0;
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			printf("\nEnter a[%d][%d]: ", i_228, j_228);
			scanf("%d", &std[i_228][j_228]);
		}
	}
	printf("\nThe given matrix is:\n\n");
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			printf("\t%d", std[i_228][j_228]);
		}
		printf("\n\n");
	}
	printf("\nThe given matrix after multiplication.\n");
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			printf("\t%d", std[i_228][j_228] * (i_228 + j_228));
		}
		printf("\n\n");
	}
	for (i_228=0;i_228<4;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			if (i_228==j_228)
			{
				if (std[i_228][j_228]%2==1)
				{
					c_228++;
				}
			}
		}
	}
	printf("\nThe number of odd numbers present in diagonal of original matrix are: %d",c_228);
	return 0;
}
