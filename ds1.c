#include<stdio.h>
void main()
{
    int i, size;
    int arr[]={1, -9, 17, 4, -3};
    size=sizeof(arr)/sizeof(arr[0]);
    printf("The array elements are: ");
    for(i=0;i<size;i++)
        printf("\narr[%d]= %d", i, arr[i]);
}
