#include<stdio.h>
int tower(int n , char beg[3], char aux[3],char end[3])
{
	if (n==1)
	{
		printf("%s -> %s\n",beg,end);
		return 0;
	}
	tower(n-1,beg,end,aux);
	printf("%s -> %s\n",beg,end);
	tower(n-1,aux,beg,end);
	return 0;
}
int main()
{
	int n;
	printf("ENTET THE NUMBER OF DISK: ");
	scanf("%d",&n);
	if (n<1)
		printf("INCORRECT VALUE\n");
	else
		tower(n,"BEG","AUX","END");
}
	
