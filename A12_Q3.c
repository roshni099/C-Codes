//This program is teo find the 2nd largest number amongh four numbers.
#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("Enter the four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a>b && a>c && a>d)
	{  if (b>c && b>d)
	       {
	       	 printf("\nSecond largest: %d", b);
		   }
		else if (c>b && c>d)
		   {
		   	 printf("\nSecond largest:%d", c);
		   }
		else if (d>b && d>c)
		   {
		   	 printf("\nSecond largest:%d", d);
		   }
	}
	else if (b>a && b>c && b>d)
	{  if (a>c && a>d)
		   {
		   	 printf("\nSecond largest:%d", a);
		   }
		else if (c>a && c>d)
		   {
		   	 printf("\nSecond largest:%d", c);
		   }
		else if (d>a && d>c)
		   {
		   	 printf("\nSecond largest:%d", d);
		   }
	}
	else if (c>a && c>b && c>d)
	{  if (a>b && a>d)
	   {
	   	 printf("\nSecond largest:%d", a);
	   }
	   else if (b>a && b>d)
	   {
	   	 printf("\nSecond largest:%d", b);
	   }
	   else if (d>a && d>b)
	   {
	   	 printf("\nSecond largest:%d", d);
	   }
	}
	else if (d>a && d>b && d>c)
	{  if (a>b && a>c)
	    {
	    	printf("\nSecond largest:%d", a);
		}
		else if (b>a && b>c)
		{
			printf("\nSecond largest:%d", b);
		}
		else if (c>a && c>b)
		{
			printf("\nSecond largest:%d", c);
		}
	}
	return 0;
}
