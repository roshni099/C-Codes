//This program is to find the product.
#include<stdio.h>
int product(float a, int b)
{
	float rosh_x;
	rosh_x = a*b;
	return(rosh_x);
}
int main()
{
	float rosh_dec, rosh_res=0;
	int rosh_in;
	printf("\nEnter the decimal number: ");
	scanf("%f", &rosh_dec);
	printf("\nEnter the integer number: ");
	scanf("%d", &rosh_in);
	rosh_res = product(rosh_dec,rosh_in);
	printf("Product:%.2f", rosh_res);
	return 0;
}
