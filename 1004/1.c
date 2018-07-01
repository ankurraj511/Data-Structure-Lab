#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
void insert()
{
	struct node *temp, *loc;
	int flag=0;
	loc=root;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");
	scanf("%d",&temp->data);
	while(flag=0)
	{	
		if(temp->data<loc->data)
		{
			if (loc->left!=NULL)
				loc=loc->left;
			else 
			{
				loc->left=temp;
				flag=1;
			}
		}
		else if (temp->data>loc->data)
		{
			if (loc->right!=NULL)
				loc=loc->right;
			else 
			{
				loc->right=temp;
				flag=1;
			}
		}
		else 
		{
			flag=1;
			printf("ENTER A DIFFERENT NUMBER");
		}
	} 
}
void delete()
{
}
void display()
{
}
int main()
{
	int c,flag=0;
	root=(struct node*)malloc(sizeof(struct node*));
	printf("ROOT VALUE OF TREE: ");
	scanf("%d",&root->data);
	printf("INSERT 1 ; DELETE 2 ; DISPLAY 3 ; EXIT 4\n");
	while(flag==0)
	{
		printf("ENTER THE CASE: ");
		scanf("%d",&c);
		switch (c)
		{
			case 1:  
				insert();
			break;
			case 2: 
				delete();
			break;
			case 3: 
				display();
			break;
			case 4: 
				flag=1;
			break;
			default: 
				printf("ENTER A VALID NO.");
		}
	}
	return 0;
}
