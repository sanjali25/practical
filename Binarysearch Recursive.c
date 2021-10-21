//program by sanjali pandey
//program of binary search by divide and conquer
#include<stdio.h>
int BinarySearch(int a[20],int low,int high,int x)
{
	int mid;
	if(low==high)
	{
		if(x==a[low])
		return low;
		else return -1;
	}
	else
	{
		mid=(low+high)/2;
		if(x==a[mid])
		return mid;
		else if(a[mid]>x)
		return BinarySearch(a,low,mid-1,x);
		else
		return BinarySearch(a,mid+1,high,x);
	}
}
void main()
{
	int n,a[20],num,i,x;
	printf("\n enter the number of elements =");
	scanf("%d",&n);
	printf("\n enter %d elements of the array=",n);
	for(i=0;i<n;i++)
	scanf("%d",&num);
	x=BinarySearch(a,0,n-1,num);
	if(x==-1)
	{
		printf("\n element not found in the array=");
	}
	else
	printf("\n element %d is found at position %d" ,num,x+1);
	}

