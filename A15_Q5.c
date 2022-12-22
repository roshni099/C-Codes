//This program is to 
#include<stdio.h>
int main()
{
   int b_228[5],n_228,i_228,t_228;
   printf("Enter the elements: ");
   for(i_228=0;i_228<5;i_228++)
   {
       scanf("%d",&b_228[i_228]); 
   }
   printf("Enter the item to delete: ");
   scanf("%d",&n_228);
   for(i_228=0;i_228<5;i_228++)
   {
      if(*(b_228+i_228)==n_228)
      {
          t_228=*(b_228+i_228);
          *(b_228+i_228)=*(b_228+i_228+1);
          *(b_228+i_228+1)=t_228;
      }
 
   }
   for(i_228=0;i_228<4;i_228++)
   printf("%d ",*(b_228+i_228));
   return 0;
}
