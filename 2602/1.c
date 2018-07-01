#include<stdio.h>
int ins=0, desc=0;
int insert(int a[], int n)
{
	if(ins<n)	
		scanf("%d",&a[ins++]);
	else
		printf("OVERFLOW\n");
}
int delete(int a[], int n)
{
	if(desc>-1)
		a[desc++]=0;
	else
		printf("UNDERFLOW\n");
}
int main()
{
	int n;
	printf("ENTER THE SIZE: ");
	scanf("%d",&n);
	int a[n],flag=0,c,k;
	for (k=0 ; k<n ; k++)
		a[k]=0;
	printf("CASE 1: INSERT ; CASE 2: DELETE ; CASE 3: EXIT\n");
	while (flag==0)
	{
		printf("\nENTER YOUR CHOISE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				insert(a,n);
			break;
			case 2:
				delete(a,n);
			break;
			case 3:
				flag=1;
			break;
			default:
				printf("ENTER THE VALID NUMBER\n");
		}
	for (k=0 ; k<n ; k++)
		printf("%d ",a[k]);
	}
	return 0;
}
