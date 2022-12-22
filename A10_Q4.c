//This program is to find out the velocity and distance covered by a stone, if it is thrown with a velocity from top of eifel tower
#include<stdio.h>
#define g 9.8
int main()
{
	int u, t;
	float v, s;
	printf("Enter the initial Velocity:");
	scanf("%d", &u);
	t = 1;
	v = u + g*t;
	s = u*t + g*t*t*0.5;
	printf("\nVelocity = %fm/s and Distance covered = %fm after 1s", v, s);
	t++;
	v = u + g*t;
	s = u*t + g*t*t*0.5;
	printf("\nVelocity = %fm/s and Distance covered = %fm after 2s", v, s);
	t++;
	v = u + g*t;
	s = u*t + g*t*t*0.5;
	printf("\nVelocity = %fm/s and Distance covered = %fm after 3s", v, s);
	t++;
	v = u + g*t;
	s = u*t + g*t*t*0.5;
	printf("\nVelocity = %fm/s and Distance covered = %fm after 4s", v, s);
	t++;
	v = u + g*t;
	s = u*t + g*t*t*0.5;
	printf("\nVelocity = %fm/s and Distance covered = %fm after 5s", v, s);
	return 0;
}
