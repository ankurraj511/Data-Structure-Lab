#include<stdio.h>
#include<malloc.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node *root;
void insert()
{
	struct node *temp,*loc;
	int flag=0;
	loc=root;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("VALUE: ");	
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	while(flag==0)
	{
		if(temp->data<loc->data)
			if (loc->left==NULL)
			{
				loc->left=temp;
				flag=1;
			}
			else 
				loc=loc->left;
		else 
			if (loc->right==NULL)	
			{
				loc->right=temp;
				flag=1;
			}
			else 
				loc=loc->right;
	}
}
/*void delete()
{
	struct node *temp,*loc;
	temp=root;	
	if (temp->data>root->data)
		temp=temp->left;
	else if (temp->data<data)
		temp=temp->right;
	else 
		if (temp->left==NULL && temp->right==NULL)
			temp=NULL;
		else if (temp->left==NULL)
			temp=

}*/

void display(struct node *temp)
{
	if (temp->left!=NULL)
		display(temp->left);
	printf("%d ",temp->data);
	if (temp->right!=NULL)
		display(temp->right);
}
int main ()
{
	int c,flag=0;
	root=(struct node*)malloc(sizeof(struct node*));
	printf("ENTER THE DATA OF ROOT NODE: ");
	scanf("%d",&root->data);
	root->left=NULL;
	root->right=NULL;
	printf("INSERTION: 1  ; DELETION: 2  ; EXIT:  3 ; DISPLAY: 4 \n");
	while(flag==0)
	{
		printf("\nENTER YOUR CHOISE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1: 
				insert();
			break;
			//case 2: 
			//	delete();
			//break;
			case 3:
				flag=1;
			break;
			case 4: 
				display(root);
			break;
			default:
				printf("ENTER A VALID NUMBER\n");
		}
	}
	return 0;
}

