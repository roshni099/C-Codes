//This program is to display the position , size and types of images formed by a concave mirror.
#include<stdio.h>
int main()
{
	int po;
	printf("\nPress1, if the object is at infinity:");
	printf("\nPress2, if the object is beyond the centre of the curvature:");
	printf("\nPress3, if the object is at the centre of the curvature:");
	printf("\nPress4, if the object is between C and F:");
	printf("\nPress5, if the object is at focus:\n");
	scanf("%d", &po);
	if (po==1)
	   {
	   	printf("\nPOSITION OF THE IMAGE- At the focus");
	   	printf("\nSIZE OF THE IMAGE- Highly deminished");
	   	printf("\nNATURE OF THE IMAGE- Real and inverted");
	   }
	else if (po==2)
	   {
	   	printf("\nPOSITION OF THE IMAGE- Between F and C");
	   	printf("\nSIZE OF THE IMAGE- Diminished");
	   	printf("\nNATURE OF THE IMAGE- Real and inverted");
	   }
	else if (po==3)
	   {
	   	printf("\nPOSITION OF THE IMAGE- At C");
	   	printf("\nSIZE OF THE IMAGE- Same size");
	   	printf("\nNATURE OF THE IMAGE- Real and inverted");
	   }
	else if (po==4)
	   {
	   	printf("\nPOSITION OF THE IMAGE- Beyond C");
	   	printf("\nSIZE OF THE IMAGE- Enlarged");
	   	printf("\nNATURE OF THE IMAGE- Real and inverted");
	   }
	else if (po==5)
	   {
	   	printf("\nPOSITION OF THE IMAGE- At infinity");
	   	printf("\nSIZE OF THE IMAGE- Highly enlarged");
	   	printf("\nNATURE OF THE IMAGE- Real and inverted");
	   }
	return 0;
}
