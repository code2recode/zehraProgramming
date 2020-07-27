
#include<stdio.h>


void fiboSeries(int s)
{

	int i;
	int  ser=s;
	int n1=0;
	int n2=1;
	int sum;

	printf("%d,%d",n1,n2);
	for(i=1;i<=ser;i++)
	{
	sum=n1+n2;
	printf(" %d ",sum);
	n1=n2;
	n2=sum;
	}
}



int main()
{
int a=8;

fiboSeries(a);
return 0;
}
