//This program is to find the average of the 20 students and count students scored above 90.
#include<stdio.h>
int main()
{
	int rosh_i, rosh_avg, rosh_count=0, rosh_sum=0, rosh_marks[20];
	for (rosh_i=0;rosh_i<20;rosh_i++)
	{
		printf("\nEnter marks: ");
		scanf("%d", &rosh_marks[rosh_i]);
	}
	for (rosh_i=0;rosh_i<20;rosh_i++)
	{
		rosh_sum = rosh_sum + rosh_marks[rosh_i];
		if (rosh_marks[rosh_i]>89)
		rosh_count++;
	}
	rosh_avg = rosh_sum/20;
	printf("\nAverage marks=%d", rosh_avg);
	printf("\nNumber of students scored O grade:%d", rosh_count);
	return 0;
}
