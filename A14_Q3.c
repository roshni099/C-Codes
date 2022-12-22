//This program is to find the largest among 2 numbers using pointers.
#include<stdio.h>
int main()
{
	int i_228, a_228, b_228, *x_228, *y_228, *l_228;
	printf("\n Enter the two number: ");
	scanf("%d %d", &a_228, &b_228 );
	x_228=&a_228;
	y_228=&b_228;
	if (*x_228 > *y_228)
	{
		l_228=x_228;
	}
	else 
	{
		l_228=y_228;
	}
	printf("\nThe largest number is %d", *l_228);
	return 0;	
}
