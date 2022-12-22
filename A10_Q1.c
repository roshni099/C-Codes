// This is a program to find a slope of a line for a given two points
#include<stdio.h>
int main()
{
	float x1, x2, y1, y2, m;
	printf("Enter the value of x1 and y1:");
	scanf("%f %f", &x1, &y1);
	printf("\nEnter the value of x2 and y2:");
	scanf("%f %f", &x2, &y2);
	m = (y2 - y1)/(x2 - x1);
	printf("\nThe slope of the line is %f", m);
	return 0;
}
