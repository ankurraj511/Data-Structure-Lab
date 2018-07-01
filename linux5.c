#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	printf("Process ID= %d\n",getpid());
	return 0;
}

