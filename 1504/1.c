#include<stdio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node *link;
};
struct node *start=NULL;
void push()
{
	struct node *temp ,*loc;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUES: ");
	scanf("%d",&temp->data);
	loc=start;
	while (loc->link!=NULL)
	{
		loc=loc->link;
	}
	loc->link=temp;
	temp->link=NULL;
}
void pop()
{
	struct node *loc;
	loc=start->link;
	free (start);
	start=loc;
}
void display()
{
	struct node *loc;
	loc=start;
	while(loc->link!=NULL)
	{
		printf("%d ",loc->data);
		loc=loc->link;
	}
	printf("%d\n",loc->data);
}
int main ()
{
	int c,flag=0;	
	start=(struct node*)malloc(sizeof(struct node*));
	printf("ENTER THE VALUE: ");
	scanf("%d",&start->data);
	start->link=NULL;
	printf("PUSH 1 ; POP 2 ; DISPLAY 3 ; EXIT 4\n");
	while(flag==0)
	{
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&c);
		switch (c)
		{
			case 1 :
				push();
			break;
			case 2 : 
				pop();
			break;
			case 3 :
				display();
			break;
			case 4 :
				flag=1;
			break;
			default : 
				printf("ENTER A VALID NO !! \n");
		}
	}
}  
				
