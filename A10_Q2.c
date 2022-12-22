//This is program to find out the secondary voltage of a transformer , if primary voltage , turns of primary and secondary are given.
#include<stdio.h>
int main()
{
	float pv, sv, pt, st;
	printf("Enter the value of primary voltage: ");
	scanf("%f", &pv);
	printf("\nEnter the value of primary turns: ");
	scanf("%f", &pt);
	printf("\nEnter the value of secondary turns: ");
	scanf("%f", &st);
	sv = pv * st/pt;
	printf("\nThe value of secondary voltage is %f ", sv);
	return 0;
}
