//This program is to add two matrix.
#include<stdio.h>
int main()
{
	int a[3][4]={{5,2,3,4},{2,4,6,8},{4,6,8,10}};
	int b[3][4]={{1,3,5,7},{3,5,7,9},{7,9,11,13}};
	int sum[3][4], i_228, j_228;
	for (i_228=0;i_228<3;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			sum[i_228][j_228] = a[i_228][j_228] + b[i_228][j_228];
		}
	}
	printf("\nSum of the given matices is :\n");
	for (i_228=0;i_228<3;i_228++)
	{
		for (j_228=0;j_228<4;j_228++)
		{
			printf("\t%d", sum[i_228][j_228]);
		}
		printf("\n\n");
	}
	return 0;
}
