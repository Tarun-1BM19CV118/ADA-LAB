#include<stdio.h>
#include<stdlib.h>
 
int linear(int a[], int, int);
int binary(int a[], int, int);

void main()
{
    int n,ch, i, a[10], key,pos=0,found = 0;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    for(;;)
    {
    printf("Enter the choice : 1.Linear search 2.Binary search 3.exit \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("enter the array elements\n");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            printf("enter the elements to be searched\n");
            scanf("%d",&key);
            pos = linear(a, n, key); 
            if(pos != 0)
            {
                printf("\nElement %d is found at %dth position\n",key, pos);
            } 
            else
            {
                printf("Element not found\n");
            }
            break;
        case 2:
            printf("enter the array elements in ascending order\n");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            printf("enter the elements to be searched\n");
            scanf("%d",&key);
            pos = binary(a, n, key);
            if(pos != 0)
            {
                printf("Element %d is found at %dth position\n",key, pos);
            } 
            else
            {
                printf("Element not found\n");
            }
            break;
        default:exit(0);
    }
    }
}

int binary(int a[], int n, int key)
{
    int first, last, mid;
    first = 0;
    last = n-1;
    mid = (first + last)/2;
    while(first <= last)
    {
        if(key < a[mid])
        {
            last = mid-1;
        }
        else if(key == a[mid])
        {
            return mid+1;
        }
        else
        {
            first = mid+1;
        }
            mid = (first + last)/2;
        }
        if(first > last)
        {
            return 0;
        }
}

int linear(int a[], int n, int key)
{
    if(n>=0)
    {
        if(a[n-1] == key)
        {
            return n;
        }
        else
        {
            return linear(a, n-1, key);
        }
        n--;
    }
}
