#include<stdio.h>
int main ()
{
	printf("case 1: Additoin  case 2: Multiplication case 3: Transpose \n");	
	int m1[3][3],m2[3][3];
	int i,j,n;
	printf("ENTER THE FIRST MATRIX \n");
	for (i=0 ; i<3 ; i++)
	{	
		for (j=0 ; j<3 ; j++)
			scanf("%d",&m1[i][j]);
	}
	printf("ENTER THE SECOND MATRIX \n");
	for (i=0 ; i<3 ; i++)
	{	
		for (j=0 ; j<3 ; j++)
			scanf("%d",&m2[i][j]);
	}
	printf("ENTER THE CASE: ");
	scanf("%d",&n);
	switch (n)
	{
		case 1: 
			for (i=0 ; i<3 ; i++)
			{	
				printf("\n");
				for (j=0 ; j<3 ; j++)
					printf("%d ",m1[i][j]+m2[i][j]);
			}
		break;
		case 2:
		break;
		case 3:
			for (i=0 ; i<3 ; i++)
			{	
				printf("\n");
				for (j=0 ; j<3 ; j++)
				{	
					printf("%d ",m1[j][i]);
					//printf("%d",m2[j][i]);			
				}
			}
		break;
		default:
			printf("ENTER A VALID NUMBER"); 
	}
	printf("\n");
}
