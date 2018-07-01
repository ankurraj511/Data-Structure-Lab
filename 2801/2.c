#include<stdio.h>
void push (int a[], int i, int n)
{
	int e,j;	
	printf("ENTER THE ELEMENT: ");
	scanf("%d",&e);
	a[i]=e;
	for (j=0 ; j<n ; j++)
		printf("%d ",a[j]);	
}
void pop (int a[], int i, int n)
{
	int j;
	a[i-1]=0;
	for (j=0 ; j<n ; j++)
		printf("%d ",a[j]);
}
int main()
{
	int i,n,flag=1,con;
	printf("PUSH: 1  ;  POP: 2  ;  EXIT: 3\n");
	printf("ENTER THE SIZE OF STACK: ");
	scanf("%d",&n);	
	int a[n];
	for (i=0 ; i<n ; i++)
		a[i]=0;
	for (i=0 ; flag=1 ; i++)
	{
		printf("\nENTER THE CASE: ");
		scanf("%d",&con);
		switch (con)
		{
			case 1: 
				push(a,i,n);
			break;
			case 2: 
				pop(a,i,n);
				i--;
			break;				
			case 3:
				flag=0;
			break;
			defaulf:
				printf("ENTER THE VALID CASE");
		}
	}
} 
		
