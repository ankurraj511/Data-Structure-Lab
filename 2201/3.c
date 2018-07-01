#include<stdio.h>
int main()
{
	int n,i,j,min;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&n);
	int a[n];
	printf("ENTER THE ARRAY: ");
	for (i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	for (i=0 ; i<n-1 ; i++)
	{
		min=i;
		for (j=i+1 ; j<n ; j++)
		{
			if(a[min]>a[j])
				min=j;
		}
		swap(a[min],a[i]);
	}
}
