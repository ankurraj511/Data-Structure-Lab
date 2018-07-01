#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start=NULL;
void nodes(int n)
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
		while (newnode->link!=NULL)
			newnode=newnode->link;
		newnode->link=temp;
		temp->link=NULL;
	}
	temp->link=start;
}
void first()
{
	struct node *temp,*loc;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");
	scanf("%d",&temp->data);
	loc=start;
	while (loc->link!=start)
		loc=loc->link;
	temp->link=start;
	loc->link=temp;
	start=temp;
}
void end()
{
	struct node *temp,*loc;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");
	scanf("%d",&temp->data);
	loc=start;
	while (loc->link!=start)
		loc=loc->link;
	loc->link=temp;
	temp->link=start;
}
void nth(int n)
{
	struct node *temp,*loc;
	int i;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");
	scanf("%d",&temp->data);
	loc=start;
	for (i=1 ; i<n-1 ; i++)
		loc=loc->link;
	temp->link=loc->link;
	loc->link=temp;
}
void dfirst()
{
	struct node *temp,*loc;
	temp=start->link;
	loc=start;
	while(loc->link!=start)
		loc=loc->link;
	loc->link=temp;
	free(start);
	start=temp;
}
void dend()
{
	struct node *temp,*loc;
	loc=start;
	while (loc->link!=start)
	{
		temp=loc;	
		loc=loc->link;
	}
	temp->link=start;
	free(loc);
}
void dnth(int n)
{
	struct node *temp,*loc;
	int i;
	loc=start;
	for (i=1 ; i<n ; i++)
	{
		temp=loc;
		loc=loc->link;
	}
	temp->link=loc->link;
	free(loc);
}
void display()
{
	struct node *temp;
	temp=start;
	printf("VALUES: ");
	while (temp->link!=start)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("%d\n",temp->data);
}
void search(int n)
{
	struct node *loc;
	int sum=1;
	loc=start;
	printf("POSITION: ");
	while (loc->link!=start)
	{
		if (loc->data==n)
			printf("%d ",sum);
		sum++;
		loc=loc->link;
	}
}
void update(int u1, int u2)
{
	struct node *loc;
	loc=start;
	while(loc->link!=start)
	{
		if (loc->data==u1)
			loc->data=u2;
		loc=loc->link;
	}
}
int main()
{
	int n,c,flag=0,num,s1,u1,u2;
	printf("NUMBERS OF NODES: ");
	scanf("%d",&n);
	nodes(n);
	printf("INSERT FIRST : 1 ; Nth : 2 ; END : 3 ; DISPALY : 4 \n");
	printf("DELETE FIRST : 5 ; Nth : 6 ; END : 7 ; EXIT : 8 \n");
	printf("SEARCH : 9  ;   UPDATE : 0 \n");
	while(flag==0)
	{
		printf("\nENTER THE CASE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1 :
				first();
			break;
			case 2 :
				printf("ENTER THE POSITION: ");
				scanf("%d",&num);
				nth(num);
			break;	
			case 3 :
				end();
			break;		
			case 4 :
				display();
			break;			
			case 5 :
				dfirst();
			break;
			case 6 :
				printf("ENTER THE POSITION: ");
				scanf("%d",&num);
				dnth(num);
			break;
			case 7 :
				dend();
			break; 
			case 8 : 
				flag=1;
			break;
			case 9 : 
				printf("VALUE TO SEARCH: ");
				scanf("%d",&s1);
				search(s1);
			break;
			case 0 :
				printf("VALUE TO UBDATE: ");
				scanf("%d",&u1);
				printf("NEW VALUE: ");
				scanf("%d",&u2);
				update(u1,u2);
			break;
			default : 
				printf("ENTER A VALID CASE\n");
		}
	}
	return 0;
}	
	
	
	
		
