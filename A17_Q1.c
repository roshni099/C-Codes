//This program is to display the pattern.
#include<stdio.h>
int main()
{
	char ca='A', cn='1', j_228;
	int i_228, n_228;
	n_228=6;
	for (i_228=0;i_228<n_228;i_228++)
	{
		for (j_228=0;j_228<5-i_228;j_228++)
		{
			printf(" ");
		}
		for (j_228=0;j_228<i_228;j_228++)
		{
			if (i_228%2==0)
			{
				printf("%2c", ca++);
			}
			else
			{
				printf("%2c", cn++);
			}
		}
		printf("\n");
	}
	return 0;
}
