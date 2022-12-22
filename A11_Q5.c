//This program is to display the time period of a simple pendulum for different lenght of a thread.
#include<stdio.h>
#define pi 3.14
#define g 9.8
int main()
{
	int l1, l2, l3, l4, l5, t1, t2, t3, t4, t5;
	l1 = 10;
	t1 = 2*pi*sqrt(l1/g);
	printf("Time period if the lenght is 10m: %d", t1);
	l2 = 20;
	t2 = 2*pi*sqrt(l2/g);
	printf("\nTime periof if the lenght is 20m: %d", t2);
	l3 = 30;
	t3 = 2*pi*sqrt(l3/g);
	printf("\nTime period if the lenght is 30m: %d", t3);
	l4 = 40;
	t4 = 2*pi*sqrt(l4/g);
	printf("\nTime period if the lenght is 40m: %d", t4);
	l5 = 50;
	t5 = 2*pi*sqrt(l5/g);
	printf("\nTime period if the lenght is 50m: %d", t5);
	return 0;	
}
