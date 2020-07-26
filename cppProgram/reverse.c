
#include<stdio.h>

void recursion(char *st)
{
	if(*st=='\0')
	return;

	recursion(st+1);
	printf("*%c*",*st);

		printf("R\n");
		printf("I\n");
		printf("Z\n");
		printf("W\n");
		printf("A\n");
		printf("N\n");
	
	return; 

}












int main()
{

	char str[]="QWER";

	recursion(str);

	return 0;
}
