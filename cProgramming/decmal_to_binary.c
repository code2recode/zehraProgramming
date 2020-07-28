
#include<stdio.h>

int binary(unsigned n)
{
	unsigned i;

	for(i=1<<8;i>0;i=i/2)
	(n&i)?printf("1"):printf("0");
}

int main()
{
binary(7);
	printf("\n");
binary(4);

return 0;
}

