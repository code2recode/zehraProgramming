#include <stdio.h>
int main() 
{

   
 int n=123321;
int rev= 0;
int remainder;
int rev_no;

	
    
    while (n != 0) 
{
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n=n/10;
}
    printf("Reversed number = %d\n", rev);
	
	rev_no=rev;

	if(rev==rev_no)
	printf("no is palindrome\n");

	else
	printf("no is not palindrome\n");


    return 0;
}


