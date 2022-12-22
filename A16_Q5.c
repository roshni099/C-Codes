//This program is to find the sum of eaxh row of the matix 4*5.
#include<stdio.h>
 void add(int (*ra)[5],int *pb)
 {
     int i_228,j_228;
     for(i_228=0;i_228<4;i_228++)
     {
         pb[i_228]=0;
         for(j_228=0;j_228<5;j_228++)
         pb[i_228]=pb[i_228]+ra[i_228][j_228];
     }

 }
 int main()
 {
     int i_228,j_228,x[4][5],y[4];
     printf("Enter the elements  the matrix:\n");
     for(i_228=0;i_228<4;i_228++)
     {
         for(j_228=0;j_228<5;j_228++)
         {
             printf("the element [%d][%d] ",i_228,j_228);
             scanf("%d",&x[i_228][j_228]);
         }
     }
     add(x,y);
      printf("Entered  matrix:\n");
     for(i_228=0;i_228<4;i_228++)
     {
         for(j_228=0;j_228<5;j_228++)
         {
             printf("%d\t",x[i_228][j_228]);
         }
        
         printf("\n");
     }
     printf("\nThe addition of each row\n");
      for(i_228=0;i_228<4;i_228++)
      printf("%d\t",y[i_228]);
     return 0;
 }
