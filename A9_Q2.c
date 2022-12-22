//This program is to find the area of a rectangle.
#include <stdio.h>
int main()
{
	int l, b, area;
	printf("Length if the rectangle  :"),
	scanf("%d", &l);
	printf("\nBreadth of the rectangle  :");
	scanf("%d", &b);
	area = l*b;
	printf("\nArea of the rectangle : %d", area);
	return 0;
}
