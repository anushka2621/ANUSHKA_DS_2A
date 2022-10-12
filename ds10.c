#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],n1,n2,n,k=0,i,j;
    printf("My Name is Anushka Kaushik");
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
        for (i=0;i<n1;i++)
        {
            for (j=0;j<n2;j++)
            {

                if (a[i]==b[j])
                {
                    c[k]=a[i];
                    k++;
                }
            }
        }
        printf("intersection of set a and b");
        for (i=0;i<k;i++)
       printf ("%d",c[i]);}
