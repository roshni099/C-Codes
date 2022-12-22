//Counting number of centuries scored in match by goto statement.
#include<stdio.h>
int main()
{
	int rosh_score, rosh_count=0, rosh_i=1;
	century:
		printf("\nEnter the score of next player no.:%d\t", rosh_i);
		scanf("%d", &rosh_score);
		if (rosh_score<0)
		goto century;
		rosh_count+=rosh_score/100;
		rosh_i++;
		if (rosh_i <=11)
		goto century;
		printf("\nTotal number of players made century:%d", rosh_count);
		return 0;
}
