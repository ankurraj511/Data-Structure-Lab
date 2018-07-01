#include<stdio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node *link;
};
struct node *start=NULL;
void create()
{
	start=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");
	scanf("%d",&start->data);
	start->link=NULL;
}
void push()
{
	struct node *temp ,*loc;
	if (start==NULL)
	{
		create();
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node*));
		printf("VALUE: ");
		scanf("%d",&temp->data);
		loc=start;
		while (loc->link!=NULL)
		{
			loc=loc->link;
		}
		loc->link=temp;
		temp->link=NULL;
	}
}
void pop()
{
	struct node *loc, *temp;
	loc=start;
	if (start!=NULL)
	{	
		if (loc->link==NULL)
		{
			start=NULL;
		}
		else
		{
			while (loc->link!=NULL)
			{
				temp=loc;		
				loc=loc->link;
			}
			temp->link=NULL;
			free (loc);
		}
	}
	else
		printf("UNDERFLOW\n");
}
void display()
{
	struct node *loc;
	loc=start;
	if (loc==NULL)
	{
		printf("0\n");
	}
	else
	{
		while(loc->link!=NULL)
		{
			printf("%d ",loc->data);
			loc=loc->link;
		}
		printf("%d\n",loc->data);
	}
}
int main ()
{
	int c,flag=0;	
	printf("PUSH 1 ; POP 2 ; DISPLAY 3 ; EXIT 4\n");
	while(flag==0)
	{
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&c);
		switch (c)
		{
			case 1 :
				push();
				display();
			break;
			case 2 : 
				pop();
				display();
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

