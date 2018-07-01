#include<stdio.h>
int main()
{
	int i,j,n,temp,min;
	printf("ENTER THE SIZE OF ARRAY: ");
	scanf("%d",&n);
	int a[n];
	printf("ENTER THE VALUES IN ARRAY: ");
	for(i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	for(i=0 ; i<n-1 ; i++)
	{
		min=i;
		for(j=i+1 ; j<n ; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0 ; i<n ; i++)
		printf("%d ",a[i]);
	return 0;
}
