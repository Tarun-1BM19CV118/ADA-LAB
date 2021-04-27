#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[10],n,i,j,temp;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("\nenter the elements of an array :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=1;i<=n-1;i++) // number of passes
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\nThe elements after Bubble sort are :");
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
}
