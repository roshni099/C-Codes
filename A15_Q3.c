//This program is to swap numbers using pointers.
#include<stdio.h>
void swap(int *a_228, int *b_228)
{
	int t_228;
	t_228=*a_228;
	*a_228=*b_228;
	*b_228=t_228;
	printf("\n a = %d, b = %d", *a_228, *b_228);	
}
int main()
{
	int a_228, b_228;
	printf("\nEnter the value of a: ");
	scanf("%d", &a_228);
	printf("\nEnter the value of b: ");
	scanf("%d", &b_228);
	swap (&a_228, &b_228);
	return 0;
}
