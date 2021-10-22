//program by sanjali pandey
//maxheap
#include<stdio.h>
void max_heapify(int a[20],int i,int n);
void builtmaxheap(int a[20],int n);
int main()
{
	int n,i,a[20];
	printf("\nenter the number of elements");
	scanf("%d",&n);
	printf("\nenter %d elements for creation of max heap",n);
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
	printf("\n original array=\n");
	for(i=0;i<=n;i++)
	scanf("%d\t",a[i]);
	builtmaxheap(a,n);
	printf("\n max heap is\n");
	for(i=1;i<=n;i++)
	printf("%d\t",&a[i]);
}
// Function to create maxHeap
void builtmaxheap(int a[20],int n)
{
	int i;
	for( i=n/2;i>=1;i++)
	max_heapify(a,i,n);
}
//Restore property of MaxHeap
void max_heapify(int a[20],int i,int n)
{
	int l,r,largest,temp;
	l=2*i;
	if((l<=n)&&a[l]>a[i])
	largest=l;
	else
	largest=i;
	if((r<=n)&&(a[r]> a[largest]))
	largest=r;
	if(largest!=i)
	{
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		max_heapify(a,largest,n);
	}
}
