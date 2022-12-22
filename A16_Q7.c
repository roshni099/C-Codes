#include<stdio.h>
void largecolumn(int m_182,int arr_182[][10],int n_182,int *res_182)
{
 int i_182 = 0, j_182;
 int max_182 = 0;
 
 while (i_182 < n_182) 
 {
 for ( j_182 = 0; j_182 < m_182; j_182++)
 {
 if (arr_182[j_182][i_182] > max_182) 
 {
 max_182 = arr_182[j_182][i_182];
 }
 }
 res_182[i_182] = max_182;
 
 i_182++;
 }
 
 
}
int main()
{
 int m_182,n_182,*res_182; 
 int i_182, j_182;
 printf("Enter the number of rows and column: \n");
 scanf("%d %d",&m_182,&n_182); 
 int arr[10][10]; 
 printf("\nEnter the elements of the matrix: \n");
 for(i_182=0;i_182<m_182;i_182++) 
 {
 for(j_182=0;j_182<n_182;j_182++)
 {
 scanf("%d",&arr[i_182][j_182]);
 }
 }
 printf("\nThe elements in the matrix are: \n");
 for(i_182=0;i_182<m_182;i_182++) 
 {
 for(j_182=0;j_182<n_182;j_182++)
 {
 printf("%d ",arr[i_182][j_182]);
 }
 printf("\n");
 }
 largecolumn(m_182,arr,n_182,res_182);
 for(i_182 = 0; i_182 < n_182; i_182++) 
 {
 printf("Largest element in column %d is %d \n", i_182, res_182[i_182]);
 }
}

