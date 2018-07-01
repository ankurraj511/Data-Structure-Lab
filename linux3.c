#include<stdio.h>
int main()
{
	int j,n,sum=1;
	printf("ENTER A NUMBER: ");
	scanf("%d",&n);
	for (j=2 ; j<=n/2 ; j++)
	{
		if (n%j==0)
			sum=sum+1;
	}
	if (sum==1)
		printf("GIVEN NUMBER IS PRIME \n");
	else
		printf("GIVEN NUMBER IS NOT PRIME\n");
	
	return 0;
}
