//This program is to display "=".
#include<stdio.h>
void display(int rosh_n)
{
	int rosh_i;
	for (rosh_i=0;rosh_i<rosh_n;rosh_i++)
	{
		printf("=");
	}
	printf("\n");
}
int main()
{
	display (10);
	display(20);
	return 0;
}
