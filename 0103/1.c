#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
}*start;
void beg(int val)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	start=temp;
	temp->data=val;
	temp->link=NULL;
}
void display()
{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
}
void end(int val)
{
	struct node *temp,*loc;
	temp=(struct node*)malloc(sizeof(struct node));
	loc=start;
	while(loc!=NULL)
		loc=loc->link;
	loc->link=temp;
	temp->data=val;
	temp->link=NULL;
}
int main()
{
	int val;
	printf("ENTER THE DATA: ");
	scanf("%d",&val);
	beg(val);
	display();
	printf("\nENTER THE DATA: ");
	scanf("%d",&val);
	end(val);
	display();
}
	
