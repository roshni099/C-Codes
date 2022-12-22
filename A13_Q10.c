//To find the average score by the players using goto statement.
#include<stdio.h>
int main()
{
	int rosh_score, rosh_sum_score=0, rosh_i=1;
	float rosh_avg_score;
	repeat:
		printf("Enter the score of next player no.:%d\t ",rosh_i);
		scanf("%d", &rosh_score);
		rosh_sum_score+=rosh_score;
		rosh_i++;
		if (rosh_i<=11)
		goto repeat;
		rosh_avg_score=rosh_sum_score/11.0;
		printf("\nThe average score is:%f", rosh_avg_score);
		return 0;
}
