#include<stdio.h>
void main()
{
  int a[100],i,pos,size,element;
  printf("enter the size of array:");
  scanf("%d",&size);
  printf("enter the element:\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
    }
    printf("enter position you want to insert:");
    scanf("%d",&pos);
    printf("enter item you want to insert:");
    scanf("%d",&element);
    for(i=size;i>=pos;i--)
    {
     a[i]=a[i-1];
     }
     a[pos]=element;
     size++;
     printf("resultant array elements:");
     for(i=0;i<size;i++)
     {
      printf("%d",a[i]);
      printf(" ");
      }
      }
