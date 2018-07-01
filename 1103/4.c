#include<stdio.h>
int i=0;
void push(int a[], int n)
{
	if (i>n-1)
		printf("OVERFLOW\n");
	else
	{
		printf("VALUE: ");
		scanf("%d",&a[i++]);
	}
}
void pop (int a[])
{
	if (i<1)
		printf("UNDERFLOW\n");
	else	
		a[--i]=0;
}
void display(int a[], int n)
{
	int j;	
	printf("VALUES: ");
	for (j=0 ; j<n ; j++)
		printf("%d ",a[j]);
	printf("\n");
}
int main ()
{
	int n,flag=0,c,j;
	printf("ENTER THE SIZE OF ARRAY: ");
	scanf("%d",&n);
	int a[n];
	for (j=0 ; j<n ; j++)
		a[j]=0;
	printf("PUSH : 1 ; POP : 2 ; EXIT : 3 \n ");
	while (flag==0)
	{
		printf("CASE: ");
		scanf("%d",&c);
		switch (c)
		{
			case 1 : 
				push(a,n);
			break;
			case 2 : 
				pop(a);
			break;
			case 3 :
				flag=1;
			break;
			default :
				printf("ENTER A VALID NUMBER\n");
		}
		display(a,n);
	}
	return 0;
}

