//program by sanjali
//program: bubble sort
#include<stdio.h>
void bubblesort(int a[20],int n)
{
	int i,j,temp,flag=1,swap=0,count=0;
	printf("\n the initial array");
	for(i=1;i<=n-1&&flag==1;i++)
	{
		flag=0;
	for(j=1;j<=n;j++)
	{
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		flag=1;
		swap++;
	}
	count++;
}
	 printf("\n pass %d",i);
	
	for(j=1;j<=n-i;j++)
	
	printf("\t%d",a[j]);
	}
	printf("\n the no of comp is: %d",count);
	printf("\n the no of swap is: %d",swap);
}
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
	 printf("%d  ",a[i]);

}

	




