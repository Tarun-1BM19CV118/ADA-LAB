/*
    Program to print all the nodes reachable from a given starting node in a given directed graph using DFS method.
*/

#include<stdio.h>
#include<stdlib.h>

void dfs(int);
int a[10][10],vis[10],n;
void main()

{

    int i,j,src;
    printf("enter number of vertices : ");
    scanf("%d",&n);
    printf("enter adjacency matrix : ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    vis[i]=0;
    printf("enter source vertex : ");
    scanf("%d",&src);
    printf("Nodes reachable from %d vertex \n", src );
    dfs(src);

}

void dfs(int v)
{

    int i;
    vis[v]=1;
    printf("%d",v);
    for(i=1;i<=n;i++)
    {
        if(a[v][i]==1 && vis[i]==0)
        dfs(i);
    }
}
