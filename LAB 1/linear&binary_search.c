#include<stdio.h>
#include<stdlib.h>

int linear(int a[],int key,int n);
int binary(int a[],int key,int first,int last);
void main()
{
    int a[10],key,pos=-1,n,ch,i,first;
    int j,temp;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be searched\n");
    scanf("%d",&key);
    printf("enter the choice : 1.linear search 2.binary search 3.exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:pos=linear(a,key,n);
               if(pos!=-1)
                    printf("element %d is found at %d position",key,pos);
                else
                    printf("element not found");
                break;
        case 2:
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
               printf("The elements after sorting are :");
               for(i=0;i<n;i++)
                printf("%d ",a[i]);
               pos=binary(a,key,0,n);
               if(pos!=-1)
                    printf("\nelement %d is found at %d position",key,pos);
                else
                    printf("\nelement not found");
                break;
        default:exit(0);     
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
