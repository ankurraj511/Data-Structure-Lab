#include<stdio.h>
int top=0;
int push(int a[] , int n)
{
	if(top<n)
	{	
		printf("VALUE: ");
		scanf("%d",&a[top++]);
	}
	else 
		printf("OVERFLOW\n");
}
int pop(int a[] , int n)
{
	if (top>0)	
		a[--top]=0;
	else 
		printf("UNDERFLOW\n");
}
int display(int a[] , int n)
{
	int i;
	printf("VALUES: ");
	for(i=0 ; i<n ; i++)
		printf("%d ",a[i]);
}
int main()
{
	int c,n,i,flag=0;
	printf("ENTER THE SIZE OF ARRAY: ");
	scanf("%d",&n);
	int a[n];
	for(i=0 ; i<n ; i++)
		a[i]=0;
	printf("PUSH: 1 , POP: 2 , EXIT: 3\n");
	while(flag==0)
	{
		printf("\nENTER YOUR CHOICE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				push(a,n);
			break;
			case 2:
				pop(a,n);
			break;
			case 3: 
				flag=1;
			break;
			default : 
				printf("ENTER A VALID NUMBER\n");
		}	
		display(a,n);
	}
}
