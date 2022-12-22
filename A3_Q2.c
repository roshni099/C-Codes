//This program is to display the char.
#include<stdio.h>
void display(int n, char ch)
{
	int rosh_i;
	for (rosh_i=0;rosh_i<n;rosh_i++)
	{
		printf("%c", ch);
	}
	printf("\n");
}
int main()
{
	display(10, 'a');
	display(20, 'b');
	return 0;
}
