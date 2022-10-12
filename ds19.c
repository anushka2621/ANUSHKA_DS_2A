#include<stdio.h>
void main()
{
    int a[10][10],d[10][10],r,c,i,j;
    printf("enter the number of rows");
    scanf("%d",&r);
    printf("enter the number of columns");
    scanf("%d",&c);
    printf("enter the element of first matrix ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            d[j][i]=a[i][j];
        }
    }
    printf("\ntranspose of the matrix:\n");
    for (i=0;i<c;i++)
    {
        for (j=0;j<r;j++)
        {
            printf("%d",d[i][j]);
        }
    printf("\n\n");
    }}

