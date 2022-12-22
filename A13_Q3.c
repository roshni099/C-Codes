//This program is to show if basic salary is<1500, the HRA=10% and DA=40% of the basic salary ,else HRA= 500 and DA = 50% . find gross salary
#include<stdio.h>
int main()
{
	float bs, gs;
	printf("\nEnter basic salary:");
	scanf("%f", &bs);
	if(bs<1500)
	  {
	  	gs = bs + bs*10/100 + bs*40/100;
	  }
	else
	  {
	  	gs = bs + 500 + bs*50/100;
	  }
	printf("\nGross Salary = Rs. %.2f", gs);
	return 0;
}
