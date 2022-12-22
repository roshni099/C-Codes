//This program is to convert lowercase to uppercase.
#include<stdio.h>
int convert(char rosh_ch)
{
	if (rosh_ch>=65 && rosh_ch<=90)
	    return rosh_ch;
	else 
	    return (rosh_ch - 32);
}
int main()
{
	int rosh_b;
	rosh_b = convert('c');
	printf("%c", rosh_b);
	return 0;
}
