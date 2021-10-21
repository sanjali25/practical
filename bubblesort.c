//program by sanjali
//program: bubble sort
#include<stdio.h>
void bubblesort(int a[20],int n);
void main()
{
	int a[20],i,n;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter %d elements\n",n);
	for(i=1;i<=n;i++) scanf("%d" ,&a[i]);
	bubblesort(a,n);
	printf("\n sorted elements are\n");
	for(i=1;i<=n;i++)
	{
	 printf("%d  ",a[i]);

}
}
void bubblesort(int a[20],int n)
{
	int i,j,temp;
	for(i=1;i<=n-1;i++)
	{
	
	for(j=1;j<=n-i;j++)
	{
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	printf("\n pass%d:",i);
	for(j=1;j<=n;j++) printf("%d ",a[i]);
	
}
}
}


