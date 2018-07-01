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
	scanf("%d",&start->data);
	start->link=NULL;
	for (i=1 ; i<n ; i++)
	{
		temp=(struct node*)malloc(sizeof(struct node*));
		newnode=start;		
		scanf("%d",&temp->data);
		while(newnode->link!=NULL)
			newnode=newnode->link;
		newnode->link=temp;
		temp->link=NULL;
	}
	return 0;
}
void dfirst()
{
	struct node *temp;
	temp=start;
	temp=start->link;
	free(start);
	start=temp;
}
void dnth(int n)
{
	struct node *temp,*loc;
	int i;
	temp=start;
	loc=start->link;
	for (i=1 ; i<n-1 ; i++)
	{
		temp=loc;
		loc=loc->link;
	}
	temp->link=loc->link;
	free(loc);
}
void dend()
{
	struct node *temp,*loc;
	temp=start;
	loc=start->link;
	while (loc->link!=NULL)
	{
		temp=loc;
		loc=loc->link;
	}
	temp->link=NULL;
	free (loc);
}
void display()
{
	struct node *temp;
	printf("VALUES: ");
	temp=start;
	while(temp->link!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("%d ",temp->data);
}
int main()
{
	int n,flag=0,c,num;
	printf("NUMBERS OF NODES: ");
	scanf("%d",&n);
	nodes(n);
	printf("DELETE FIRST : 1 ; Nth : 2 ; END : 3 ; DISPALY : 4 ; EXIT : 5 \n");
	while(flag==0)
	{
		printf("\nENTER THE CASE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1 :
				dfirst();
			break;
			case 2 :
				printf("ENTER THE POSITION: ");
				scanf("%d",&num);
				dnth(num);
			break;
			case 3 :
				dend();
			break; 
			case 4 :
				display();
			break;
			case 5 : 
				flag=1;
			break;
			default : 
				printf("ENTER A VALID CASE\n");
		}
	}
	return 0;
}	
