//This program is to find the factorial using pointers.
#include<stdio.h>
int main()
{
	int i_228, fac_228, num_228, *x_228, *y_228;
	x_228=&num_228;
	y_228=&fac_228;
	printf("\nEnter the number: ");
	scanf("%d", x_228);
	fac_228=1;
	for (i_228=1;i_228<=*x_228;i_228++)
	{
		*y_228=*y_228*i_228;
	}
	printf("\nFactorial of %d is %d", *x_228, *y_228);
	return 0;
}
