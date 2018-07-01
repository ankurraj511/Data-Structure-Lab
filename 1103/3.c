#include<stdio.h>
void tower (int n, char a[3], char b[3], char c[3])
{
	if(n==1)
	{
		printf("%s -> %s\n",a,c);
		return ; 
	} 
	tower(n-1,a,c,b);
	printf("%s -> %s\n",a,c);
	tower(n-1,b,a,c);
	return ;
}
int main()
{
	int n;
	printf("ENTER THE NUMBERS OF DISKS: ");
	scanf("%d",&n);
	tower(n,"BEG","AUX","END");
	return 0;
}

