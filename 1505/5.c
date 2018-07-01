#include<stdio.h>
int main ()
{
	int n,i,s,j,mid;
	printf("ENTER THE SIZE: ");
	scanf("%d",&n);
	int a[n];
	for(i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	printf("ENTER THE NUMBER TO BE SEARCHED: ");
	scanf("%d",&s);
	mid=n/2;
	while(s!=a[mid])
	{
		if(s<a[mid])
			mid=mid/2;
		else 
			mid=(n+mid)/2;
	}
	if (s==a[mid])
		printf("POS: %d",mid+1);
	
}
			

