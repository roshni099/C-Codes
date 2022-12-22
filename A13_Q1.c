//This program is to display whether the wheatstone bridge is balanced or not, if not then find it to balance it.
#include<stdio.h>
int main()
{
	float p, q, r, s;
	printf("Enter the value of P:");
	scanf("%f", &p);
	printf("\nEnter the value of Q:");
	scanf("%f", &q);
	printf("\nEnter the value of R:");
	scanf("%f", &r);
	printf("\nEnter the value of S:");
	scanf("%f", &s);
	if (p*s==q*r)
	   {
	   	printf("\nThe wheatstone bridge is balanced");
	   }
	else
	   {
	   	printf("\nThe wheatstone bridge is NOT balanced");
	   	s = r*q/p;
	   	printf("\nChoose S = %.2f to balance the wheatstone bridge", s);
	   }
	return 0;
}
