//This program is to find the no. of +ve integers present in each row of matrix 4*6.
#include<stdio.h>
 void count(int (*pa)[6],int *pb_ct)
 {
     int i_228,j_228,c_228;
     for(i_228=0;i_228<4;i_228++)
     {
         c_228=0;
         pb_ct[i_228]=0;
         for(j_228=0;j_228<6;j_228++)
         {
          if(pa[i_228][j_228]%2==0)
          c_228++;
          pb_ct[i_228]=c_228;
         }
     }

 }
 int main()
 {
     int i_228,j_228,x[4][6],y[4];
     printf("Enter the elements of the matrix:\n");
     for(i_228=0;i_228<4;i_228++)
     {
         for(j_228=0;j_228<6;j_228++)
         {
             scanf("%d",&x[i_228][j_228]);
         }
     }
     count(x,y);
      printf("entered  the matrix of size 4 x 6:\n");
     for(i_228=0;i_228<4;i_228++)
     {
         for(j_228=0;j_228<6;j_228++)
         {
             printf("%d ",x[i_228][j_228]);
         }
        
         printf("\n");
     }
       printf("positive integer are:\n ");
       for(i_228=0;i_228<4;i_228++)
	  {
           printf("for row %d is ",i_228);
      printf("%d",y[i_228]);
      printf("\n");
       }
     
     return 0;
 }
