//This program is to find the sum of the two variables using pointers.
#include<stdio.h>
int main()
{
	int i_228, sum_228=0, a_228[2], *b_228;
	b_228=a_228;
	for (i_228=0;i_228<2;i_228++)
	{
		printf("\nEnter number: ");
		scanf("%d", &a_228[i_228]);
	}
	for (i_228=0;i_228<2;i_228++)
	{
		sum_228+=*(b_228+i_228);
	}
	printf("\nSum of the numbers is %d", sum_228);
	return 0;
}
