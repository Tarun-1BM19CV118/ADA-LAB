#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],n,i,j,pos,small,temp;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    printf("\nenter the elements of an array :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<=n-2;i++)  // for n elements (n-1) passes
    {
        small=a[i];
        pos=i;
        for(j=i+1;j<=n-1;j++){
            if(a[j]<small){
                small=a[j];
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }

    printf("\nthe elements after selection sort are :");
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
}
