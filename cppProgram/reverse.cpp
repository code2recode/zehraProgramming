#include<iostream>
using namespace std;


void reverse(char *c)
{

	int i;
	int len=0;

	
	for(i=0;c[i]!='\0';i++)
	++len;

	for(i=len-1;i>=0;i--)	
	cout<<c[i];
}

int main()
{
reverse;
char str[20]="learning cpp lang";
reverse(str);
return 0;
}
