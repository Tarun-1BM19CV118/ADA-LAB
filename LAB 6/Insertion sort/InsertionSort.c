#include<stdio.h>
#include<stdlib.h>

int a[10],i,j,y,n;
void insertion_sort();

void main()
{
    printf("enter the number of elements of an array : ");
    scanf("%d",&n);
    printf("enter the elements of the array :");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertion_sort();
    printf("The elements after insertion sort are : ");
    for(i=0;i<n;i++)
      printf(" %d ",a[i]);
}

void insertion_sort()
{
    for(i=1;i<n;i++)
    {
        y=a[i];
        j=i-1;
        while(j>=0 && a[j]>y)
        {
            a[j+1]=a[j];
            j=j-1; 
        }
        a[j+1]=y;
    }
}
