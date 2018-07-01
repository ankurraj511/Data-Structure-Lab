#include<stdio.h>
int main()
{
	int n,i,j;
	printf("ENTER THE ORDER OF MATRIX: ");
	scanf("%d",&n);	
	int a[n][n];
	printf("ENTER THE MATRIX\n");
	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<n ; j++)
			scanf("%d",&a[i][j]);
	}
	for (i=n-1 ; i>=0 ; i--)
	{
		printf("\n");		
		for (j=0 ; j<n ; j++)
			printf("%d ",a[j][i]);
	}
}
