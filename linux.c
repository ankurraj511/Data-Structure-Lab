#include<stdio.h>
int main()
{
	int i,j,sum;
	for (i=2 ; i<=100 ; i++)
	{
		sum=1;		
		for (j=2 ; j<i ; j++)
		{
			if (i%j==0)
				sum=sum+1;
		}
		if (sum==1)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}
