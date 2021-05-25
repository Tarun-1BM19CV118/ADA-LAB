#include<stdio.h>
void bfs(int);

int a[10][10],vis[10], n;
void main()
{
    int i,j,src;
    printf("\nenter the no of vertices : ");
    scanf("%d",&n);
    printf("\nenter the adjacency matrix :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter the source node:\t");
    scanf("%d",&src);
    printf("\nnodes reachable from %d vertex is : ",src);
    bfs(src);
}

void bfs(int v)
{
    int q[10],f=0,r=0,u,i,j;
    vis[v]=1;
    q[r]=v;
    while(f<=r)
    {
        u=q[f++];
        printf("\t%d",u);
        for(i=1;i<=n;i++)
        {
            if(a[u][i]==1 && vis[i]==0)
            {
                vis[i]=1;
                r=r+1;
                q[r]=i;
            }
        }
    }
}
