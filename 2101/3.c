#include<stdio.h>
int main()
{
	int n,i,j,sum;
	printf("ENTER A ODD NUMBER: ");
	scanf("%d",&n);
	printf("ENTER THE REQUIRED ARRAY: ");
	int a[n];
	for (i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	for (i=0 ; i<n ; i++) 
	{
		sum=0;
		for (j=0 ; j<n ; j++)
		{		
			if (a[i]==a[j])
			sum++;
		}
		if (sum==1)
		printf("%d",a[i]);
	}
	printf("\n");
}

