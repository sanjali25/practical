//program by sanjali pandey
//program of Hoares partition
#include<stdio.h>
void quicksort(int a[],int lb,int ub);
void swap(int array[],int l,int u);
int hpartition(int a[],int lb,int ub);

int main()
{
int a[20],n,i,lb,ub;
printf("enter size of array:");
scanf("%d",&n);
printf("enter %d elements:",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
lb=0;
ub=(n-1);	
 quicksort(a,lb,ub);
 printf("after quicksort array is :");
 	for(i=0;i<(n);i++)
	{
	printf("%d\t",a[i]);
    }	
}
void quicksort(int a[],int lb,int ub)
{
	int loc,j;
	if(lb<ub)
	{
	 loc=hpartition(a,lb,ub);
	 quicksort(a,lb,loc);
	 quicksort(a,loc+1,ub);	
	}

}
int  hpartition(int a[],int lb,int ub)
{
	int pivot,start,end;
	pivot=a[lb];
	start=lb-1;
	end=ub+1;
	while(1)
	{
		do{
			start++;
	     }while(a[start]<pivot);
	    do{
	    	end--;
		}while(a[end]>pivot); 
		if(start>=end)
		{
			return end;
		}
		  swap(a,start,end);
		}
	
}
void swap(int array[],int l,int u)
{
	int temp;
	temp=array[l];
	array[l]=array[u];
	array[u]=temp;
}
