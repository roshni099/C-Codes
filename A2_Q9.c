//This program is to convert the temperature from celcius to fahrenheit.
#include<stdio.h>
int main()
{
	int rosh_i;
	float rosh_F=0;
	for (rosh_i=20;rosh_i<=90;rosh_i+=10)
	{
		rosh_F=(float)((rosh_i-32)*(5.0/9.0));
		printf("\n%d in Celcius is %.2f in Fahrenheit", rosh_i, rosh_F);
	}
	return 0;
}
