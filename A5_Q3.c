//This program is to find nth Fibonacci number.
#include<stdio.h>
int fibonacci(int n)
{
	return (n==0||n==1?1:fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
	int rosh_i,rosh_p,rosh_c=0;
    printf("Enter the number: ");
    scanf("%d",&rosh_p);
    printf("The series is:");
    for(rosh_i=0;rosh_i<rosh_p;rosh_i++)
    {
        printf("%d ",fibonacci(rosh_c));
        rosh_c++; 
    }
    return 0;
}
