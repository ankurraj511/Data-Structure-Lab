#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("ENTER THE ORDER OF MATRIX: ");
	scanf("%d %d",&m,&n);
	int a[n][m];
	printf("ENTER THE MATRIX \n");
	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<m ; j++)
			scanf("%d",&a[i][j]);
	}
	
