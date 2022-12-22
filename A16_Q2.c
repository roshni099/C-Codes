#include <stdio.h>
void add(int (*pa)[4],int *pb)
{
    int i,j;
    for(i=0;i<4;i++)
    {
        pb[i]=0;
        for(j=0;j<4;j++)
        {
            pb[i]=pb[i]+pa[i][j];

        }
    }
}
int main()
{
    int a[4][4];int b[4];
	int i,j;
    printf("\nEnter 4x4 elements");
    for (i=0;i<4;i++)

    for(j=0;j<4;j++)
    {

        scanf("%d",&a[i][j]);
    }
    add(a,b);
    for (i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("%d\t",b[i]);
    printf("\n");
    }
   
    return 0;
}
