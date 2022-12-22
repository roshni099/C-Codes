#include<stdio.h>
void largecolumn(int m,int arr[][10],int n,int *res)
{
   int i_228 = 0, j_228;
   int max_228 = 0;
   while (i_228 < n) 
   {
       for ( j_228 = 0; j_228 < m; j_228++)
       {
         if (arr[j_228][i_228] > max_228) 
         {
            max_228 = arr[j_228][i_228];
         }
       }
       res[i_228] = max_228;
       max_228 = 0;
       i_228++;
   } 
}
int main()
{
   int m_228,n_228,*res_228; 
   int i_228, j_228;
   printf("Enter the number of rows and column: \n");
   scanf("%d %d",&m_228,&n_228); 
   int arr[10][10]; 
   printf("\nEnter the elements of the matrix: \n");
   for(i_228=0;i_228<m_228;i_228++) 
   {
      for(j_228=0;j_228<n_228;j_228++)
      {
         scanf("%d",&arr[i_228][j_228]);
      }
   }
   printf("\nThe elements in the matrix are: \n");
   for(i_228=0;i_228<m_228;i_228++) 
   {
       for(j_228=0;j_228<n_228;j_228++)
       {
            printf("%d ",arr[i_228][j_228]);
       }
       printf("\n");
   }
   largecolumn(m_228,arr,n_228,res_228);
   for(i_228= 0; i_228 < n_228; i_228++) 
   {
       printf("Largest element in column %d is %d \n", i_228, res_228[i_228]);
   }
}
