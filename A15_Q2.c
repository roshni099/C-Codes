//This program is to find the sum of first n elements starting from a fixed position.
#include<stdio.h>
int large_sum(int *a,int *b,int n)
{
	int i_228, s1_228=0, s2_228=0;
	for (i_228=0;i_228<n;i_228++)
	{
		s1_228+=a[i_228];
		s2_228+=b[i_228];
	}
	if (s1_228==s2_228)
	    return 0;
	else if (s1_228>s2_228)
	    return 1;
	else
	    return 2;
}
int main()
{
	int x[10], y[8], g_228, i_228;
	printf("\nEnter the numbers of first array\n");
	for (i_228=0;i_228<10;i_228++)
	{
		printf("\nEnter number: ");
		scanf("%d", &x[i_228]);
	}
	printf("\nEnter the numbers of second array\n");
	for (i_228=0;i_228<8;i_228++)
	{
		printf("\nEnter number: ");
		scanf("%d", &y[i_228]);		
	}
	g_228=large_sum(x+5,y+5,4);
	if (!g_228)
	{
		printf("\nBoth sum are equal");
	}
	else if (g_228
	==1)
	{
		printf("\n x is greater than y");
	}
	else 
	{
		printf("\n y is greater than x");
	}
	return 0;
	
}

