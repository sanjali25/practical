//program by sanjali pandey
//bfs,bst,dfs,dft using linkedlist representation
#include<stdio.h>
#include<stdlib.h>
typedef struct nodetypr
{
 int info;
 struct nodetype *next;
}node;

void bfs(int v);
void bft();
void dfs(int v);
void dft();

node *getnode()
{
 node *p;
 p=(node*)malloc(sizeof(node));
 return p;
}

node *h[10];
int n,visited[10],q[10],rear=-1,front=0;
int main()
{
 int i,k,index,ch,v;
 node *p,*r;
 printf("\nEnter the number of vertices:");
 scanf("%d",&n);
 //linked list representation of graph
 for(i=1;i<=n;i++)
 {
  h[i]=getnode();
  h[i]->info=i;
  p=h[i];
  printf("\nenter the number of vertices adjecent from %d:",i);
  scanf("%d",&k);
  while(k>=1)
  {
   printf("\n enter the vertices adjecent from %d:",i);
   scanf("%d",&index);
   r=getnode();
   r->info=index;
   r->next=NULL;
   p->next =r;
   p=r;
   k--;
  }
 
 }
 printf("\n List representation of graph:");
 for(i=1;i<=n;i++)
 {
  printf("Head[%d]",i);
  p=h[i];
  while(p!=NULL)
  {
   printf("%d->",p->info);
   p=p->next;
  }
  printf("\n");
 }

 do
 {
  printf("\n1.bfs 2.bft 3.dfs 4.dft\n");
     printf("\nEnter your choice:");
  for(i=1;i<=n;i++)
  visited[i]=0;
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("\nEnter the bfs index:");
          scanf("%d",&v);
          bfs(v);
          break;
   case 2:bft();
          break;
   case 3:printf("\nEnter the dfs index:");
          scanf("%d",&v);
          dfs(v);
          break;
   case 4:dft();
          break;
  }
 }while(ch!=4);
}

int deleteq()
{
 int x;
 if(rear<front)
 return 0;
 x=q[front];
 front++;
 return x;
}

void insertq(int x)
{
 if(rear==19)
 {
  printf("\n queue is full");
  return;
 }
 rear++;
 q[rear]=x;
}

int empty()
{
 if(rear<front)
 return 1;
 return 0;
}

void bfs(int v)
{
 int x;
 node *p;
 visited[v]=1;
 printf("%d\t",v);
 insertq(v);
 while(!empty())
 {
  x=deleteq();
  p=h[x];
  while(p!=NULL)
  {
   if(visited[p->info]==0)
   {
    printf("%d\t",p->info);
    insertq(p->info);
    visited[p->info]=1;  
    }
   p=p->next;
  }
 }
}

void bft()
{
 int i;
 for(i=1;i<=n;i++)
 visited[i]=0;
 for(i=1;i<=n;i++)
 {
  if(visited[i]==0)
  bfs(i);
 }
}

void dfs(int v)
{
 node *p;
 visited[v]=1;
 printf("%d\t",v);
 p=h[v];
 while(p!=NULL)
 {
  if(visited[p->info]==0)
  {
   dfs(p->info);
  }
  p=p->next;
 }
}

void dft()
{
 int i;
 for(i=1;i<=n;i++)
 visited[i]=0;
 for(i=1;i<=n;i++)
 {
  if(visited[i]==0)
  dfs(i);
 }
}
