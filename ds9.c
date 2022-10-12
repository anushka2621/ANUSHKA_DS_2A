#include <stdio.h>
int main()
{
    int a[10],b[10],c[10],i,j,k,n1,n2;
    printf("ANUSHKA KAUSHIK");
    printf("enter the number elements ");
    scanf("%d",&n1);
    printf("enter the element of set a");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("enter the number elements");
    scanf("%d",&n2);
    printf("enter the elements of set b");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<k;j++)
        {
            if (c[j]==a[i])
                break;
        }
        if(j==k)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=0;j<k;j++)
        {
            if (c[j]==b[i])
                break;
        }
        if (j==k)
            {
                c[k]=b[i];
                k++;
            }
    }
    printf("union of set a and b is:\n");
    for(i=0;i<k;i++)
        printf("%d",c[i]);
}
