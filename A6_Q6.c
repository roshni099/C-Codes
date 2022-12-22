//To count the odd,even and prime numbers in an array
#include<stdio.h>
int main()
{
 int rosh_i,rosh_j,rosh_f=1,rosh_codd=0,rosh_ceve=0,rosh_cprime=0,rosh_num[10];
 for(rosh_i=0;rosh_i<10;rosh_i++)
 {
 printf("\nEnter numbers: ");
 scanf("%d",&rosh_num[rosh_i]);
 }
 
 for(rosh_i=0;rosh_i<10;rosh_i++)
 {
 if(rosh_num[rosh_i]%2==0)
 rosh_ceve++;
 else
 rosh_codd++;
 for(rosh_j=2;rosh_j<=rosh_num[rosh_i]/2;rosh_j++) 
 {
 if(rosh_num[rosh_i]%rosh_j==0)
 {
 rosh_f=0;
 break;
 }
 
 }
 if(rosh_f==1)
 rosh_cprime++; 
 rosh_f=1; 
 }
 printf("\nNo.of odd numbers=%d",rosh_codd);
 printf("\nNo.of even numbers=%d",rosh_ceve);
 printf("\nNo.of prime numbers=%d",rosh_cprime-1);
 return 0;
}

