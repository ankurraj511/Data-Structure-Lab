#include<stdio.h>
int main()
{
	int n,i,j,k,l,sum=0;
	printf("ENTER NO OF RECTANGLES: ");
	scanf("%d",&n);
	int a[4];
	printf("ENTER THE SIDES OF RECTANGLES \n");
	
	for (l=0 ; l<n ; l++)
	{
		for (i=0 ; i<4 ; i++)
			scanf("%d",&a[i]);	
		sum=0;		
		for(j=0 ; j<4 ; j++)
		{
			for (k=0 ; k<4 ; k++)
			{
				if (a[j]==a[k])
					sum++;
			}
		}
		if (sum==8)
			printf("YES\n");
		else 
			printf("NO\n");
		
	}
}	
		
								
