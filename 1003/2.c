#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start=NULL;
int nodes(int n)
{
	struct node *temp,*newnode;
	int i;
	start=(struct node*)malloc(sizeof(struct node*));
	printf("VALUES: ");
	scanf("%d ",&start->data);
	start->link=NULL;
	for (i=1 ; i<n ; i++)
	{
		temp=(struct node*)malloc(sizeof(struct node*));
		newnode=start;
		scanf("%d ",&temp->data);
		while (newnode->link!=NULL)
			newnode=newnode->link;
		newnode->link=temp;
		temp->link=NULL;
	}
	return 0;
}
void atn(int num )
{
	struct node *temp, *loc;
	int i;
	temp=(struct node*)malloc(sizeof(struct node*));
	loc=start;
	for (i=2 ; i<num ; i++)
		loc=loc->link;
	printf("VALUE: ");
	scanf("%d",&temp->data);
	temp->link=loc->link;
	loc->link=temp;
}
void end()
{
	struct node *temp,*loc;
	temp=(struct node*)malloc(sizeof(struct node*));
	loc=start;	
	while(loc->link!=NULL)
		loc=loc->link;
	printf("VALUE: ");
	scanf("%d",&temp->data);
	temp->link=NULL;	
	loc->link=temp;	
}
void display()
{
	struct node *temp;
	temp=start;
	printf("VALUES: ");
	while(temp->link!=NULL)
	{
		printf("%d ",temp->data);	
		temp=temp->link;
	}
	printf("%d ",temp->data);
}
int main()
{
	int c,n,num,flag=0;
	printf("ENTER THE NUMBERS OF NODES: ");
	scanf("%d",&n);
	nodes(n);
	printf("END: 1 ; Nth: 2 ; DISPLAY: 3 ; EXIT: 4 \n");
	while (flag==0)
	{
		printf("\nENTER THE CASE: ");
		scanf("%d",&c);
		switch (c)
		{
			case 1: 
				end();
			break;
			case 2: 
				printf("ENTER THE POSITION: ");
				scanf("%d",&num);
				atn(num);
			break;
			case 3: 
				display();
			break;	
			case 4: 
				flag=1;
			break;
			default :
				printf("ENTER A VALID CASE");
		}
	}
}
