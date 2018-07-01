#include<stdio.h>
#include<malloc.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
}*root=NULL;
void insert()
{
	int flag=0;	
	struct node *temp,*loc;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	loc=root;
	while(flag==0)
	{
		if(temp->data<loc->data)
		{
			if(loc->left!=NULL)
			{
				loc=loc->left;
			}
			else	
			{	
				loc->left=temp;
				flag=1;
			}
		}
		else if (temp->data>loc->data)
		{
			if(loc->right!=NULL)
			{
				loc=loc->right;
			}
			else		
			{
				loc->right=temp;
				flag=1;
			}
		}
		else
		{
			printf("NUMER EXIST\n");
			flag=1;
			temp=NULL;
		}
	}
}
void display(struct node *root)
{
	if(root!=NULL)
	{
		display(root->left);
		printf("%d ",root->data);
		display(root->right);
	}
	
}
struct node* delete(struct node *prv, struct node *root, int value)
{		
	if(root->data>value)
	{
		delete(root,root->left, value);
		return root;
	}
	else if (root->data<value)
	{
		delete(root,root->right, value);
		return root;
	}
	else 
	{
		if (root->left==NULL && root->right==NULL)
		{	
			prv=NULL;
			free(root);
			printf("BOTH NULL\n");
		}
		else if (root->left==NULL && root->right!=NULL)
		{	
			prv=root->right;
			free(root);
			printf("LEFT NULL\n");
		}
		else if (root->left!=NULL && root->right==NULL)
		{	
			prv=root->left;
			free(root);
			printf("right NULL\n");
		}
		else 
		{
			printf("YOU GOT IT....YOO MY MISTAKE\n");
		}
	}	
}
int main()
{
	int flag=0,c,rdata,value;
	printf("INSERT: 1  EXIT: 2 DELETE: 3\n");
	root=(struct node*)malloc(sizeof(struct node*));
	printf("ENTER THE ROOT DATA: ");
	scanf("%d",&rdata);
	root->data=rdata;
	root->left=NULL;
	root->right=NULL;
	while(flag==0)
	{
		printf("\nENTER YOUR CHOICE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				insert();
			break;
			case 2:
				flag=1;
			break;
			case 3: 
				printf("ENTER THE VALUE TO BE DELETED: ");
				scanf("%d",&value);
				delete(root,root,value);
			break;
			default:
				printf("ENTER A VALID CHOICE\n");
		}
		display(root);
	}
}
