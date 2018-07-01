#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start;
start=(struct node*)malloc(sizeof(struct node*));
start->data=NULL;
start->link=NULL;
void push()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUES: ");
	scanf("%d",&temp->data);
	temp->link=start;
	start=temp;
}
void pop()
{
	struct node *temp;
	temp=start;
	temp=start->link;
	free(start);	
	start=temp;
}
void display ()
{
	struct node *temp;
	temp=start;
	printf("values: ");
	while(temp->link!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
	printf("%d",temp->data);
}
int main()
{
	int c,flag=0;
	printf("push :1  pop :2\n");
	while(flag==0)
	{
		scanf("%d",&c);
		switch (c)
		{
			case 1 : 
				push();
			break;
			case 2 :
				pop();
			break;
			default :
				flag=1;
		}
	display();
	}
}	
