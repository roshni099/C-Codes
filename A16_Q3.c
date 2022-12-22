//This program is to find the sum of a particular row of matrix 4*6.
#include<stdio.h>
 int adderrow(int (*pa)[6],int n)
 {
     int i,j,sum=0;
     for(i=0;i<6;i++)
     {
         sum+=pa[n-1][i];
     }
     return sum;

 }
 int main()
 {
     int i,j,x[4][6],r,s;
     printf("Enter the elements of the matrix:\n");
     for(i=0;i<4;i++)
     {
         for(j=0;j<6;j++)
         {
            
             scanf("%d",&x[i][j]);
         }
     }
     printf("The matrix of size 4 x 6:\n");
     for(i=0;i<4;i++)
     {
         for(j=0;j<6;j++)
         {
             
             printf("%d\t",x[i][j]);
         }
         printf("\n");
     }
     printf("Enter the row number for which you want addition :");
     scanf("%d",&r);
     s=adderrow(x,r);
     printf("The sum of %dth row is %d ",r,s);
     return 0;
 }
