/* 2) Sort a given set of N integer elements using 
the Quick sort technique and also compute time taken for different N values. */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void quicksort(int array[20],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(array[i]<=array[pivot]&&i<last)
            i++;
         while(array[j]>array[pivot])
            j--;
         if(i<j){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }
      }

      temp=array[pivot];
      array[pivot]=array[j];
      array[j]=temp;
      quicksort(array,first,j-1);
      quicksort(array,j+1,last);

   }
}

int main(){
   int i, n;
   clock_t start,end;
   
   printf("Enter the number of elements : ");
   scanf("%d",&n);
   int array[n];
    for(i=0;i<n;i++)
    {
        array[i]= rand()%1000;
        printf("%d ",array[i]);
    }
   start = clock();
   quicksort(array,0,n-1);
   end = clock();
    printf("\n------------------------------------");
	printf("\nSorted array : ");
	for(i=0;i<n;i++)
	printf("%d ",array[i]);
    printf("\n\ntime taken to sort %d numbers is %fsecs",n,(((double)(end-start))/(CLOCKS_PER_SEC)));
    return 0;
}
