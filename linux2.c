#include<stdio.h>
int main()
{
	int i,j,sum,n;
	printf("ENTER A NO TILL WHICH U WANT: ");
	scanf("%d",&n);	
	for (i=2 ; i<=n ; i++)
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
