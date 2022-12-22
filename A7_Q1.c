//This program is to find the transpose of a matrix of size 4*4.
#include<stdio.h>
int main()
{
	int a[4][4]={{1,2,3,4},{11,12,13,14},{21,22,23,24},{31,32,33,34}}, i, j;
	int b[4][4];
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
