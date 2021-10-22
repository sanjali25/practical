//program by sanjali pandey
//program of Dijkshtra
#include<stdio.h>
#include<conio.h>
//gr  is adjacency matrix, c i cost matrix, dist[] distance from source to other
int main()
{
int i,e,n,c[20][20],j,k,gr[20][20],min;
int v,u,dist[20],s[20];
printf("\n enter total no.of vertices in graph  ");
scanf("%d",&n);
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++)
gr[i][j]=0; 
printf("\n enter total no. of edges ");
scanf("%d",&e);
for(i=0;i<=e;i++)  //Fill the cost of matrix diagonal 0 and all other 1000 
for(j=0;j<=n;i++)
{
	if(i==j) 
	c[i][j]=0;
	else 
	c[i][j]=10000;
	 } 	
	 for(k=1;k<=e;k++)
	 {
	 	printf("\n enter two vertices for edge-%d",k);
	 	scanf("%d",&i);
	 	scanf("%d",&j);
	 	gr[i][j]=1;  //g[j][i]
	 	printf("\nenter the cost of edge %d-",k);
	 	scanf("%d",&c[i][j]);
	 }
	 for(i=0;i<=n;i++) // print  adjacency Matrix
	 {
	 	printf("\n\n");
	 	for(j=0;j<=n;j++)
	 	printf("\t%d", gr[i][j]);
		 	 }
		 	 printf("\n cost matrix is"); //print cost adjacency matrix
		 	 for(i=1;i<=n;i++)
		 	 {
		 	 	printf("\n\n");
		 	 	for(j=0;j<=n;j++)
		 	 		printf("\t%d", c[i][j]);
			  }
			  printf("\n enter the source vertex: ");
			  scanf("%d",&v);
			  for(i=0;i<=n;i++) // initialize the dist[] value and set s
			  {
			  	dist[i]=c[v][i];
			  	s[i]=0;
			  }
			  s[v]=1; // add v to the set
			  dist[i]=0; //distance from source to source=0
			  u=v;
			  for(k=0;k<=n;k++)
			  {
			  	min=1000; // find a vertex u not s[] and dist[u] is minimum
			  	for(i=1;i<=n;i++)
				  {
				  	if((s[i]!=1)&&(dist[i]<min))
				  	{
				  		min=dist[i];
				  		u=i;
					  }
				  }
				  s[u]=1;
			  printf("\n distance:%d--->%d is: %d",v,u,dist[u]);
			  for(j=0;j<=n;j++)
			  {
			  	if((gr[u][j]==1)&&(s[j]!=1))
			  	{
			  		if(dist[j]>(dist[u]+c[u][j]))
			  		dist[j]=dist[u]+c[u][j];
				  }
			  }
}
return 0;
}
