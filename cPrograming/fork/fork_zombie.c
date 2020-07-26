
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
	int main()
	{
		pid_t child_pid=fork();

	//parent process
	if(child_pid>0)
	{
		sleep(10);
	}
	
	else
		exit(0);

return 0;
}
