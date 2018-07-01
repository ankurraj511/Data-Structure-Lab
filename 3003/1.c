#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start=NULL;
void insert()
{
	struct node *temp, *loc;
	loc=start;
	temp=(struct node*)malloc(sizeof(struct node*));
	while (loc->link!=NULL)
		loc=loc->link;
	printf("VALUE: ");
	scanf("%d",&temp->data);
	loc->link=temp;
	temp->link=NULL;
}
void delete()
{
	struct node *temp, *loc;
	if (start->link!=NULL)
	{	
		loc=start->link;
		free (start);
		start=loc;
	}
	else 
		start=NULL;
		
}
void display()
{
	struct node *temp,*loc;
	loc=start;
	if (loc!=NULL)
	{	
		printf("QUEUE: ");
		while (loc->link!=NULL)
		{
			printf("%d ",loc->data);
			loc=loc->link;
		}
		printf("%d\n",loc->data);
	}
	else 
		printf("UNDERFLOW\n");
		
	
}
int main ()
{
	int c,flag=0;
	start=(struct node*)malloc(sizeof(struct node*));
	printf("INSERT: ");
	scanf("%d",&start->data);
	start->link=NULL;
	printf("INSERT: 1 ; DELETE: 2 ; EXIT: 3\n");
	while (flag==0)			
	{
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				insert();
			break;
			case 2: 
				delete();
			break;
			case 3:
				flag=1;
			break;
			default:
				printf("ENTER A VALID NUMBER\n");
		}
		display();
	}
	return 0;
}
			
 
