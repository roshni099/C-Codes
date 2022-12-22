//This program is to display the ASCII value.
#include<stdio.h>
void display(int n, char ch)
{
	int rosh_i;
	for (rosh_i=0;rosh_i<n;rosh_i++)
	{
		printf("%d", ch);
	}
	printf("\n");
}
int main()
{
	int rosh_x=10, rosh_y=5;
	display(20, 'a');
	display(30, 'c');
	display(rosh_x+rosh_y+5, 'b');
	return 0;
}
