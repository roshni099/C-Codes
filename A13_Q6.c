//This program is to find whether given three ponts form triangle or not.
#include<stdio.h>
int main()
{
	int x1, x2, x3, y1, y2, y3, m1, m2, m3;
	printf("\nEnter first coordinates:");
	scanf("%d,%d", &x1, &y1);
	printf("\nEnter the second coordinates:");
	scanf("%d,%d", &x2, &y2);
	printf("\nEnter the third coordinates:");
	scanf("%d,%d", &x3, &y3);
	m1 = (y2-y1)/(x2-x1);
	m2 = (y3-y2)/(x3-x2);
	m3 = (y1-y3)/(x1-x3);
	if (m1==m2&&m2==m3&&m3==m1)
	   {
	   	printf("\nGiven points does not form a triangle");
	   }
	else
	   {
	   	printf("\nGiven points does form a triangle");
	   }
	return 0;
}
