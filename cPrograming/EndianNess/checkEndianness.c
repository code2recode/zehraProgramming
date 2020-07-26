#include<stdio.h>


int main()
{
	int i=0X01234567;

	char *ch=(char *)&i;


	if(ch)
	printf("LittleEdian");
	else
	
	printf("BigEdian");
	



return 0;
}
