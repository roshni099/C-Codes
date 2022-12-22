//This program is to declare grades of a student.
#include<stdio.h>
int main()
{
	int p, c, b, m, e, per;
	printf("Enter marks in five subjects:");
	scanf("%d %d %d %d %d", &p, &c, &m, &b, &e);
	per = (int)(p+c+m+b+e)/5;
	if (per>=60)
	   {
	   	printf("\nFirst Division");
	   }
	else if (per>=50)
	   {
	   	printf("\nSecond Division");
	   }
	else if (per>=40)
	   {
	   	printf("\nThird Division");
	   }
	else
	   {
	   	printf("\nFail");
	   }
	return 0;
}
