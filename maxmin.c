//program by sanjali pandey
//program of MaxMin
#include <stdio.h>
void MaxMin(int a[20], int low, int high,int *max,int *min);
void main()
{
	int a[20],n,i,max,min;
	printf("\n Enter size of array=");
	scanf("%d",&n);
	printf("\n enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	MaxMin(a,0,n-1,&max, &min);
	printf("\n Max=%d and Min=%d", max,min);
}
//function:MaxMin
void MaxMin(int a[20],int low,int high,int *max,int*min)
{
int mid, max1, min1;
if (low==high) 
{ 
*max=*min=a[low];
}
else if(low==high-1)
{ if(a[low]>a[high])
{
	*max=a[low];
	*min=a[high];
}
	else
	{
		*max=a[high];
		*min=a[low];
	}
	
}
else { mid=(low+high)/2;
MaxMin(a,low,mid,max,min);
MaxMin(a,mid+1,high,&max1,&min1);
if(max1 > *max) *max=max1;
if(min1 < *min) *min=min1;
}
}

