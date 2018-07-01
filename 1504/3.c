#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start;
void insertbeg()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");
	scanf("%d",&temp->data);
	temp->link=start;
	start=temp;
}
void insertnth(int n)
{
	int i;	
	struct node *loc,*temp;
	loc=start;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");
	scanf("%d",&temp->data);
	for(i=0 ; i<n-1 ; i++)
	{
		loc=loc->link;
	}
	temp->link=loc->link;
	loc->link=temp;
}
void insertend()
{
	struct node *loc, *temp;
	loc=start;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");
	scanf("%d",&temp->data);
	while(loc->link!=NULL)
	{
		loc=loc->link;
	}
	loc->link=temp;
	temp->link=NULL;
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
/*void deletebeg()
{
}
void deletenth(int n)
{
}
void deleteend()
{
}
void update(int n)
{
}
void search(int item)
{
}
void sort()
{
}
void reverse()
{
}*/
int main()
{
	int c,flag=0,n;
	printf("INSERT: BEG 1   Nth 2  END 3\n");
	printf("DELETE: BEG 4   Nth 5  END 6\n");
	printf("UPDATE: 7 ; SEARCH: 8 ; SORT: 9 ; REVERSE: 10 ; EXIT: 11\n ");
	while(flag==0)
	{
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				insertbeg();
			break;
			case 2:
				printf("POSITION: ");
				scanf("%d",&n);				
				insertnth(n);
			break;
			case 3:
				insertend();
			break;
			/*case 4:
				deletebeg();
			break;
			case 5:
				deletenth();
			break;
			case 6:
				deleteend();
			break;
			case 7:
				update();
			break;			
			case 8:
				search();
			break;
			case 9:
				sort();
			break;
			case 10:
				reverse();
			break;*/
			case 11:
				flag=1;
			break;
			default : 
				printf("ENTER A VALID NUMBER\n");
		}
		display();
	}
}
			
