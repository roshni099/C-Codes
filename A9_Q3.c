//This program is to find the area of a circle.
#include<stdio.h>
#define pi 3.14
int main()
{
	float r, area;
	printf("Radius of the circle :");
	scanf("%f", &r);
	area = pi*r*r;
	printf("\nArea of the circle : %fm^2", area);
	return 0;
}
