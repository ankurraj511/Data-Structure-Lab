#include<stdio.h>
int main()
{
	int m,n,i,j,k,l;
	printf("ENTER THE ORDER OF MATRIX: ");
	scanf("%d %d",&m,&n);
	printf("ENTER THE MATRIX\n");	
	int a[n][m];
	for (i=0 ; i<n ; i++)
	{
		for (j=0  ; j<m ; j++)
			scanf("%d",&a[i][j]);
	}
	for (i=0 ; i<n ; i++)
	{
		for (j=0  ; j<m ; j++)
		{
			if(a[i][j]==0)
			{
				for (k=0  ; k<m ; k++)
					a[i][k]=0;
				for (l=0 ; l<n ; l++)
					a[l][j]=0;
			}
		}
	}
	for (i=0 ; i<n ; i++)
	{
		printf("\n");		
		for (j=0  ; j<m ; j++)
			printf("%d ",a[i][j]);
	}
}
