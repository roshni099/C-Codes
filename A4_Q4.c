//This program is to find the value of a raised to b.
#include<stdio.h>
int power(int a, int b)
{
	int rosh_res=1;
	while (b!=0)
	{
		rosh_res*=a;
		b--;
	}
	return (rosh_res);
}
int main()
{
	int rosh_base, rosh_exp, rosh_ans;
	printf("\nEnter a:");
	scanf("%d", &rosh_base);
	printf("\nEnter b:");
	scanf("%d", &rosh_exp);
	rosh_ans = power(rosh_base,rosh_exp);
	printf("\nResult:%d", rosh_ans);
	return 0;
}
