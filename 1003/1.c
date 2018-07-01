#include<stdio.h>
#include<malloc.h>
struct node
	{
		int data;
		struct node *link;
	};
struct node *start=NULL;
void new(int n)
{	
	struct node *temp,*newnode;
	int i;
	start=(struct node*)malloc(sizeof(struct node));
	printf("VALUES: ");
	scanf("%d",&start->data);
	start->link=NULL;
	for(i=1;i<n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&temp->data);
		newnode=start;
		while(newnode->link!=NULL)
			newnode=newnode->link;
		newnode->link = temp;
		temp->link=NULL;
	}
}
void display()
{
	struct node *temp;
	temp=start;
	printf("\nVALUES: ");
	while(temp->link!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("%d\n",temp->data);
}
int main()
{
	int n;
	printf("ENTER THE NUMBERS OF NODES: ");
	scanf("%d",&n);	
	new(n);
	display();
	return 0;
}
		
	


