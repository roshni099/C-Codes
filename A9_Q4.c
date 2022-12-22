//This program is to find the distance.
#include<stdio.h>
#define g 9.8
int main()
{
	float s, t, u;
	printf("Time taken is seconds:");
	scanf("%f", &t);
	printf("\nInitial velocity in m/s:");
	scanf("%f", &u);
	s = (u*t)+(0.5*g*t*t);
	printf("\nDistance: %f m", s);
	return 0;
	
}
