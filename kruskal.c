//program by sanjali pandey
//kruskal program for minimum spanning tree
#include<stdio.h>
void minheapify();
void buildminheap();
void kruskals();
int edge[10],g[10][10],n,e,p[10];
main()
{
	int i,j,ch,v1,v2,w;
	printf("\nEnter the number of vertices in the graph:");
	scanf("%d",&n);
	printf("graph is 1.directed 2.undirected\nEnter your  choice");
	scanf("%d",&ch);
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	g[i][j]=999;
	switch(ch)
	{
		case 1:printf("\nEnter the number of edges in the directed graph\n");
		scanf("%d",&e);
		printf("\nEnter the pair of vertices having edge b/w them");
		for(i=1;i<=e;i++)
		{
			scanf("%d%d%d",&v1,&v2,&w);
			g[v1][v2]=w;
			edge[i]=w;
		}
		break;
		case 2:printf("\nEnter the number of edges in the undirected graph\n");
	scanf("%d",&e);
	printf("\nEnter the pair of vertices having edge b/w them");
	for(i=1;i<=e;i++)
	{
		scanf("%d%d%d",&v1,&v2,&w);
			g[v1][v2]=w;
			g[v2][v1]=w;
			edge[i]=w;
	}
	break;
	default:printf("Enter corect choice");
}
	printf("\n Cost Matrix\n");
	for(i=1;i<=n;i++)
	{ 
	for(j=1;j<=n;j++)
	{
		printf("%d\t",g[i][j]);
	}
	printf("/n");
	}
	kruskals();// calling of function
}
int find(int x)
{
	int r=x;
	while(p[r]>0)
	{
		r=p[r];
	}
	return r;
}
void deunion(int j,int k)
{
	p[j]=k;
}
int mindelete()
{
	int x;
	x=edge[1];
	edge[1]=edge[e];
	e--;
	minheapify(1);
	return x;	
}
void kruskals()
{
	int i=1,t[10][2],j,x,q,w,v1,v2,s,r;
	int costmst=0;
	buildminheap();// create a min heap from edge cost
	//printf("\narray after min heap:\n");
	for(j=1;j<=n;j++)//initialize each vertex is in different
	p[j]=-1;
	while(i<=n-1&& e>0)
	{
		x=mindelete();
		for(q=1;q<=n;q++)
		{
			for(w=1;w<=n;w++)
			{
				if(g[q][w]==x)
				{
					v1=q;
					v2=w;
				}
			}
		}
		s=find(v1);
		r=find(v2);
		if(s!=r)
		{
			t[1][1]=v1;
			t[i][2]=v2;
			i++;
			deunion(s,r);
			costmst+=x;
		}
	}// end of while loop
	if(i<=n-1)
	printf("\nNo minimum spanning tree");
	else
	printf("\nThe minimum tree:\n");
		for(i=1;i<=n;i++)
		{
		printf("\n");
		printf("\n(%d\t%d) cost=%d",t[i][1],t[i][2],g[t[i][1]][g[1][2]]);
	}
	printf("\n cost of MST=%d",costmst);
}

//creating min heap
void buildminheap()
{
	int i;
	for(i=e/2;i>=1;i--)
	minheapify(i);
}
void minheapify(int i)
{
	int small=i,l,r,temp;
	l=2*i;r=2*i+1;
	if(l<=e&&(edge[small]))
	small=1;
	if(r<=e&&(edge[r]<edge[small]))
	small=r;
	if(i!=small)
	{
		temp=edge[i];
		edge[i]=edge[small];
		edge[small]=temp;
		minheapify(small);
	}
}
