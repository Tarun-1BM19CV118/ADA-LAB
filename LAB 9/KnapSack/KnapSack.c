#include<stdio.h>
int  n,m,o[10],p[10],v[10][10],w[10],i,j,op,ob[10];
int max(int A,int B)
{

	if(A>B)
	return A;
	else
	return B;
}
int knapsack()
{
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
		if(i==0|| j==0)
		{
			v[i][j]=0;
			}
			else
			if(w[i]>j)
			{
				v[i][j]=v[i-1][j];
				}
				else
				if(w[i]<=j)
				{
					v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
					}


		}


	}
return v[i-1][j-1];
}

void objects()
{  int k=0;
i=n;
j=m;
printf("the objects are  ");
	while(i>=0&&j>=0)
	{
		if(v[i][j]!=v[i-1][j])
		{
			//ob[k]=i;
		//	k++;
		printf("%d  ",i);

			j=j-w[i];

		}



		i=i-1;
	}
}
void main()
{
	printf("Enter the number of objects\n");
	scanf("%d",&n);
	printf("Enter the  object number and their weight and profit\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&o[i],&w[i],&p[i]);
	}
	printf("Enter the capacity of knapsack\n");
	scanf("%d",&m);
	knapsack();
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			printf("%d ",v[i][j]);
		}
		printf("\n");
	}
	printf("The optimal solution is %d  \n",v[n][m]);
	objects();

}
