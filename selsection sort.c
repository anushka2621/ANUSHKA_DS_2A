#include<stdio.h>
int main()
{
    int arr[10]={5,11,10,23,12,8,4,13,21,45};
    int n=10;
    int i,j,pos,swap;
    for (i=0;i<(n-1);i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[pos]>arr[j])
                pos=j;
        }
        if(pos!=i)
        {
            swap=arr[i];
            arr[i]=arr[pos];
            arr[pos]=swap;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}
