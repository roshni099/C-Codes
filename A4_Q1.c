//Finding the max number and counting no.of leader number
#include<stdio.h>
int rosh_max(int n)
{
 int rosh_next_num,rosh_largest=0,rosh_i;
 for(rosh_i=0;rosh_i<n;rosh_i++)
 {
 printf("Enter the next number:");
 scanf("%d",&rosh_next_num);
 if(rosh_next_num>rosh_largest)
 rosh_largest=rosh_next_num;
 }
 return rosh_largest;
 }
int rosh_count_lead(int n)
{
 int rosh_next_num,rosh_leader=0,rosh_i,rosh_count=0;
 for(rosh_i=0;rosh_i<n;rosh_i++)
 {
 printf("Enter the next number:");
 scanf("%d",&rosh_next_num);
 if(rosh_next_num>rosh_leader)
 {
 rosh_leader=rosh_next_num;
 rosh_count++;
 }
 }
 return rosh_count;
}
int main()
{
 printf("\nMax is %d\n",rosh_max(10));
 printf("\nNo.of leaders are %d",rosh_count_lead(10));
 return 0;
}

