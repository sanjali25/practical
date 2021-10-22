//program made by sanjali pandey
//Tower of Hanoi program
#include<stdio.h>
void Tower(int n, char a, char b,char c);
void main()
{
	int n;
	char ta,tb,tc;
	printf("\n Enter the number of disk");
	scanf("%d",&n);
	ta='A';tb='B';tc='C';
	Tower(n,ta,tb,tc);
}
void Tower(int n,char ta,char tb,char tc)
{
	if(n>=1)
	{
		Tower(n-1,ta,tc,tb);
		printf("\n Move disk %d fro, Tower %c to tower %c",n,ta,tb);
		Tower(n-1,tc,tb,ta);
	}
}

