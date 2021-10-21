#include<stdio.h>
int g[10][10], n, q[20], f = 0, r = -1, visited[10];
void dfs(int ver);
main()
{
	int i, j, edge, choice, ver1, ver2, ver;
	printf("\nEnter the number of vertices of the graph : ");
	scanf("%d", &n);
	printf("Graph is : \n1. Directed \n2. Undirected");
	printf("\nEnter your choice : ");
	scanf("%d", &choice);
	//filling the adjacency matrix with zero
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		 g[i][j] = 0;
	}    
	
	switch(choice)
	{
		case 1 : 
		    printf("\nEnter number of edges in the directed graph : ");
		    scanf("%d", &edge);
		    printf("\nEnter pair of vertices with edges between them : ");
		    for(i=1; i<=edge; i++)
		    {
		        scanf("%d %d", &ver1, &ver2);
		        g[ver1][ver2] = 1;
			}
			break;
		case 2 : 
		    printf("\nEnter number of edges in the undirected graph : ");
		    scanf("%d", &edge);
		    printf("\nEnter pair of vertices with edges between them : ");
		    for(i=1; i<=edge; i++)
		    {
		        scanf("%d%d", &ver1, &ver2);
		        g[ver1][ver2] = 1;
		        g[ver2][ver1] = 1;
			}
			break;
		default : 
		    printf("Wrong choice!!!");
		    break;
	}
	printf("\nAdjacency matrix representation of graph : \n");
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		    printf("%d", g[i][j]);
		printf("\n");
	}
	for(i=1; i<=n; i++)
	{
		visited[i] = 0;
	    printf("\nEnter starting vertex for DFS : ");
	    scanf("%d", &ver);
	    dfs(ver);
    }
}

    void dfs(int ver)
    {
	    int w;
	    visited[ver] = 1;
	    printf("%d\t", ver);
	    for(w=1; w<=n; w++)
	    {
		    if(g[ver][w] == 1 && visited[w] == 0)
		       dfs(w);
	    }
    }
