#include<stdio.h>
#include<stdlib.h>
int main()
{
	//multiplication of two array
	int m1[3][3],m2[3][3],i,j;
	printf("ENTER THE FIRST MATRIX\n");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
			scanf("%d",&m1[i][j]);
	}
	printf("ENTER THE SECOND MATRIX\n");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
			scanf("%d",&m2[i][j]);
	}
	
	return 0;
}

