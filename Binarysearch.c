//program by sanjali pandey
//program of Binarysearch
#include<stdio.h>
int Binarysearch(int a[20], int n, int x);
void main()
{
	int a[20],i,n,x,pos;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the elements\n",n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	printf("\n enter element to be search=");
	scanf("%d",&x);
	pos=Binarysearch(a,n,x);
	if(pos==-1)
	printf("\n element is not present/n");
	else printf("\n element is present at position %d\n",pos+1);
}
 
 //function : Binary search
 int Binarysearch(int a[20], int n, int x)
 {
 	int low,high,mid,j;
 	j=-1;
 	low=0;
 	high=n-1;
 	while(low<=high && j==-1)
 	{
 		mid=(low+high)/2;
 		if(x==a[mid])
 		j=mid;
 		else if( x < a[mid])
 		high=mid-1;
 		else low= mid+1;
	 }
	 return j;
 }
