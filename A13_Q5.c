//This program is to display whether a vehicle moves withe constant velocity .
#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter the Velocity:");
	scanf("%d", &a);
	if (a==0)
	   {
	   	printf("\nThe vehicle moves with constant velocity");
	   }
	else if (a>0)
	   {
	   	printf("\nThe vehicle moves with accelerated velocity");
	   }
	else if (a<0)
	   {
	   	printf("\nThe vehicle moves with deccelerated velocity");
	   }
	return 0;
}
