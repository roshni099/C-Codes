//This program is to search whether an item is present in an array or not.
#include<stdio.h>
int main()
{
	int rosh_i, rosh_item, rosh_m[5], rosh_pos=-1;
	printf("\nEnter item: ");
	scanf("%d", &rosh_item);
	for (rosh_i=0;rosh_i<5;rosh_i++)
	{
		printf("\nEnter Data: ");
		scanf("%d", &rosh_m[rosh_i]);
	}
	for (rosh_i=0;rosh_i<5;rosh_i++)
	{
		if(rosh_item==rosh_m[rosh_i])
		{
			rosh_pos=rosh_i;
			break;
		}
	}
	if (rosh_pos==-1)
	printf("\nItem not found");
	else
	printf("\nItem is present in position %d", rosh_pos);
	return 0;
}
