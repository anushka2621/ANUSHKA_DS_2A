#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
    printf("enter the order of first matrix");
    scanf("%d%d",&m,&n);
    printf("enter the order of second matrix");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("enter the first matrix");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter the second matrix");
        for (i=0;i<p;i++)
        {
            for (j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]=a[i][k]*b[k][j];
                }
            }
        }
        printf("output matrix\n");
        for(i=0;i<m;i++)
        {
            for (j=0;j<q;j++)
            {
                printf("%d",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication not possible");
    }
}
