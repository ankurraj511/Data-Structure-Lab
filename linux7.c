#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int  pid;
	pid =fork();
	if (pid==0)
	{
		printf("Child: Hello I am the child process\n");
		printf("Child: Child's PID: %d\n",getpid());
		printf("Child: Parents's PID: %d\n",getppid());
	}
	else 
	{
		printf("Parents: Hello I am the Pranet Process\n");
		printf("Parents: Parent's PID: %d\n",getpid());
		printf("Parents: Child's PID: %d\n",pid);
	}
	return 0;
}

