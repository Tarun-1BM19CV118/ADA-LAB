#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int linear(int a[],int key,int n);
int binary(int a[],int key,int first,int last);
void main()
{
    int key,pos=-1,n,ch,i,first;
    int j,temp;
    int temp1,pos1,small;
     clock_t start,end;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
      a[i]= rand()%10000;
      printf("%d ", a[i]);
    }
    printf("\nenter the element to be searched :\n");
    scanf("%d",&key);
    printf("enter the choice : 1.linear search 2.binary search 3.exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:start=clock();
               pos=linear(a,key,n);
               for(j=0;j<500000;j++)
				   {temp=38/600;}
               if(pos!=-1)
                    printf("element %d is found at %d position",key,pos);
                else
                    printf("element not found");
                
                end=clock();
				printf("\n time taken to search the element is %fsecs",n,(((double)(end-start))/(CLOCKS_PER_SEC)));
                break;
        case 2:start=clock();
               selectionsort(a,n);
               printf("The elements after sorting are :");
               for(i=0;i<n;i++)
                printf("%d ",a[i]);
               pos=binary(a,key,0,n);
               for(j=0;j<50000;j++)
				   {temp=38/600;}
               if(pos!=-1)
                    printf("\nelement %d is found at %d position",key,pos);
                else
                    printf("\nelement not found");
                end=clock();
				printf("\n time taken to search the element is %fsecs",n,(((double)(end-start))/(CLOCKS_PER_SEC)));
                break;
        default:exit(0);     
    }
}
void selectionsort(int *a,int n)
{
    int temp,pos,small;
    for(int i=0;i<=n-2;i++)
    {
        small=a[i];
        pos=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
}
int linear(int a[],int key,int n)
{
    if(n!=0){
    if(a[n-1]==key)
        return n;
    else
        return linear(a,key,n-1);
    }
    else
        return -1;
}
int binary(int a[],int key,int first,int last)
{
    int mid ;
    mid=(first+last)/2;
    if(first<=last)
    {
        if(a[mid]==key)
            return mid+1;
        else if(a[mid]>key)
            return binary(a,key,first,mid-1);
        else if(a[mid]<key)
            return binary(a,key,mid+1,last);
        else 
            return -1;
    }
    else
        return -1;
}
