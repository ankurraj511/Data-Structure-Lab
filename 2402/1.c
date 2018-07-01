#include<stdio.h>
int k=0;
void push(int a[], int n)
{
	int i;	
	if (k<5)	
		scanf("%d",&a[k++]);
	else
		printf("OVERFLOW \n");
	for (i=0 ; i<n ; i++)	
		printf("%d ",a[i]);
}
void pull(int a[], int n)
{
	int i;	
	if (k>0)
		a[--k]=0;
	else
		printf("UNDERFLOW \n");
	for (i=0 ; i<n ; i++)	
		printf("%d ",a[i]);
}
int main()
{
	int n;
	printf("ENTER THE SIZE OF ARRAY: ");
	scanf("%d",&n);
	int a[n],i,c,flag=0;
	for (i=0 ; i<n ; i++)
		a[i]=0;
	printf("PUSH: 1 ; PULL: 2 ; EXIT: 3 \n");
	while (flag==0)
	{	
		printf("\nENTER YOUR CHOISE: ");		
		scanf("%d",&c);	
		switch(c)
		{
			case 1: 
				push(a,n);
			break;
			case 2:
				pull(a,n);
			break;
			case 3:
				flag=1;
			break;
			default:
				printf("ENTER A VALID NUMBER");
		}
	}
	return 0;
}
	
