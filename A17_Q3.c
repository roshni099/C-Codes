//This program is to find whether the given year is leap year or not.
#include<stdio.h>
int leap(int year_228)
{
    if(((year_228%4==0) && (year_228%100!=0))|| (year_228%400==0))
       return 1;
    else 
       return 0; 
}
int main()
{
    int y_228;
    printf("Enter a year: ");
    scanf("%d",&y_228);
    int a_228=leap(y_228);
    return (a_228==1?printf("It is a leap year"):printf("It is not a leap year"));
    return 0;
}
