//This program is to convert fahrenheit into celcius.
#include<stdio.h>
int main()
{
	float c, f;
	printf("Enter the value of temperature in Fahrenheit: ");
	scanf("%f", &f);
	c = 0.5556*(f-32);
	printf("\nThe value of temperature in celsius is %.2f", c);
	return 0;
}
