//program by sanjali pandey
//program : Merge Sort
#include<stdio.h>
void MergeSort(int a[20], int low, int high);
void Merge(int a[20],int low, int mid,int high);
int b[20];
void main()
{
	int a[20],i,n;
	printf("\n enter the size of array= ");
	scanf("%d", &n);
	printf("\n enter elements to be sorted= ",n);
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	MergeSort(a,0,n-1);
	printf("\n sorted elements are= ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
//Mergesort Function
void MergeSort(int a[20] ,int low ,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		MergeSort(a,low,mid);
		MergeSort(a,mid+1,high);
		Merge(a,low,mid,high);
	}
}
//Merge Function
void Merge(int a[20],int low,int mid, int high)
{
	int i,j,h,k;
	i=low;h=low;j=mid+1;
	while(h<=mid && j<=high)
	{
		if(a[h] < a[j])
		{
			b[i] = a[h];
			h=h+1;
		}
		else
		{
			b[i] = a[j];
			j=j+1;
		}
			i=i+1;
		}
		if(h>mid)
		for(k=j;k<=high;k++)
		{
	    b[i]=a[k];
	    i++;
		}
		if(j>high)
		for(k=h;k<=mid;k++)
		{
			b[i]=a[k];
			i++;
		}
		for(k=low;k<=high;k++)
		a[k]=b[k];
}
