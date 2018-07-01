#include<stdio.h>
void main()
{
	int i,a[50],n;
	printf("Number of terms in series");
	scanf("%d",&n);
	a[0]=0;
        a[1]=1;
	
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	
	}
printf("First %d terms of series is\n",n);

for(i=0;i<n;i++)
	{printf("%d\n",a[i]);
	}
}
