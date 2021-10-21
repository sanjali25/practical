//Program by sanjali
//program of GCD
#include<stdio.h>
int main()
{
	int a,b,GCD,temp;
	printf("enter two numbers\n");
	scanf("%d,%d",&a, &b);
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	GCD=a;
	printf("GCD=%d",GCD);
	return 0;
}
	
		
