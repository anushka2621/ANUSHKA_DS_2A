#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,r,c;
    printf("enter the number of rows:");
    scanf("%d",&r);
    printf("enter the number of columns:");
    scanf("%d",&c);
    printf("enter the elements of first matrix");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            sum[i][j]=a[i][j]+b[i][j];
        }
        printf("\nsum of two matrices is :\n");
        for(i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                printf("%d",sum[i][j]);
            }

            printf("\n\n");
        }
    }

