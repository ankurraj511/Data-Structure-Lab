#include<stdio.h>
int main ()
{
	int n,i,j,sum;
	printf("ENTER THE GIVEN NUMBER: ");
	scanf("%d",&sum);
	printf("ENTER A NUMBER: ");
	scanf("%d",&n);
	printf("ENTER THE ARRAY: ");
	int a[n];
	for (i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	for (i=0 ; i<n ; i++)
	{
		for (j=i+1 ; j<n ; j++)
		{
			if (a[i]+a[j]==sum)
				printf("(%d,%d) \n",a[i],a[j]);
		}
	}
}
