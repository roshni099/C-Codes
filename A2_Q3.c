//This program is to display the time period for simple pendulum for different lenghts.
#include<stdio.h>
#include<math.h>
#define pi 3.14
#define g 9.8
int main()
{
	int rosh_l;
	float rosh_t;
	printf("\nLenght\t\tTime Period");
	for (rosh_l=10;rosh_l<=50;rosh_l=rosh_l+10)
	{
		rosh_t=2.0*pi*sqrt(rosh_l/ g);
		printf("\n%d\t\t%f", rosh_l, rosh_t);
	}
	return 0;
}
