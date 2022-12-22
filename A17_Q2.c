//This program is for selection sort.
#include<stdio.h>
int main()
{
    int i_228,n_228,min_228,temp_228,j_228,minel_228=9999999;
    int key_228;
    printf("Enter the size of the array: ");
    scanf("%d",&n_228);
    int arr[n_228];
    printf("Enter the elements of the array: ");
    for ( i_228 = 0; i_228 <n_228; i_228++)
    {
        scanf("%d",&arr[i_228]);
    }
    for(i_228=0;i_228<n_228;i_228++)
    {
        min_228=i_228;
        for(j_228=i_228+1;j_228<n_228;j_228++)
        {
            if(arr[j_228]<arr[min_228])
            min_228=j_228;
        }
        temp_228=arr[i_228];
        arr[i_228]=arr[min_228];
        arr[min_228]=temp_228;
 
    }
    printf("The sorted array:\n");
    for ( i_228 = 0; i_228 <n_228; i_228++)
    {
        printf("%d ",arr[i_228]);
    }
    return 0;
}

