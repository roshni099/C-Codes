//The program is to find the equivalent resistance of three resistances for series and parallel connections and then to find the current if they are connected to a voltage source
#include<stdio.h>
int main()
{
	int r1, r2, r3, voltage, rs;
	float is, ip, rp, t;
	printf("Enter the value of r1:");
	scanf("%d", &r1);
	printf("\nEnter the value of r2:");
	scanf("%d", &r2);
	printf("\nEnter the value of r3:");
	scanf("%d", &r3);
	printf("\nEnter the value of voltage:");
	scanf("%d", &voltage);
	rs = (float)r1 +(float)r2 +(float)r3;
	is =(float)voltage/rs;
	printf("\nThe value of current in series connection is %.2f", is);
	t =(float)1/r1 +(float)1/r2 +(float)1/r3;
	rp = (float)1/t;
	ip = (float)voltage/rp;
	printf("\nThe value of current in parallel connection is %.2f", ip);
	return 0;
	
}
