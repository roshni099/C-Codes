//This program is to find the sum and average.
#include<stdio.h>
int sum(int a, int b, int c, int d, int e)
{
	int rosh_s=0;
	rosh_s = a+b+c+d+e;
	return (rosh_s);
}
int avg(int a, int b, int c, int d, int e)
{
	int rosh_m=0;
	rosh_m = (a+b+c+d+e)/5;
	return(rosh_m);	
}
int main()
{
	int rosh_s, rosh_ag;
	rosh_s = sum(20,30,40,50,60);
	rosh_ag = avg(10,20,30,40,50);
	printf("\nSUM:%d", rosh_s);
	printf("\nAVERAGE: %d",rosh_ag);
	return 0;
}
