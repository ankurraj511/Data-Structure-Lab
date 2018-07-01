#include<stdio.h>
int main ()
{
	int n,i,s,j,sum=0;
	printf("ENTER THE SIZE: ");
	scanf("%d",&n);
	int a[n];
	for(i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	printf("ENTER THE NUMBER TO BE SEARCHED: ");
	scanf("%d",&s);
	for(i=0 ; i<n ; i++)
	{
		if(a[i]==s)
		{
			printf("POSITION: %d",i+1);
		}
		else 
			sum++;
	}
	if (sum==n)
		printf("NOT matched\n");
}
		
