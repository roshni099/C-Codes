//This program is to find the sum of elements of the array using pointer variable.
#include<stdio.h>
int main()
{
	int i_228, *ptr_228, sum_228=0, arr[5]={2,4,6,8,0};
	ptr_228=arr;
	for (i_228=0;i_228<5;i_228++)
	{
		sum_228+=*(ptr_228+i_228);
	}
	printf("\nSum=%d", sum_228);
	return 0;
}
