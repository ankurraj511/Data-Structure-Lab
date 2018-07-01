#include<stdio.h>
#include<malloc.h>
struct node
{
	int info; 
	struct node *left;
	struct node *right;
};
struct node *root=NULL , *ptr;
void search (int item)
{
	ptr=root;
	while (ptr!=NULL)
	{
		if (ptr->info==item)
		{
			printf("ITEM FOUND\n");
			return;
		}
		if (item<ptr->info)
		{
			ptr=ptr->left;
		}
		else 
		{
			ptr=ptr->right;
		}
	}
	ptr=NULL;
	printf("ITEM NOT FOUND\n");
	return ;
}
void insert (int item)
{
	struct node *avail;	
	search (item);
	if (ptr!=NULL)
	{
		printf("ITEM EXIST\n");
		return ;
	}
	avail=(struct node*)malloc(sizeof(struct node*));
	avail->info=item;
	avail->left=NULL;
	avail->right=NULL;
	ptr=avail;
	return ;
}
void display()
{
	ptr=root;	
	if (ptr->left!=NULL)
		display(ptr->left);
	printf("ptr->info");
	if (ptr->right!=NULL)
		display(ptr->right);
}
int main()
{
	int c,flag=0,item;
	printf("INSERT : 1  ;  SEARCH : 2  ;  DELETE : 3  ; EXIT : 4  ; DISPALY : 5s\n");
	while (flag==0)
	{
		printf("ENTER THE CHOICE:");
		scanf("%d",&c);
		switch (c)
		{
			case 1:
				printf("VALUE: ");
				scanf("%d",&item);
				insert(item); 
				break;
			case 2:
				printf("VALUE: ");
				scanf("%d",&item);
				search(item); 
				break;
			case 3:
				break;
			case 4:
				flag=1;
				break; 
			case 5:
				display();
				break;
			default :
				printf("ENTER A VALID CHOICE\n");
		}
	}
	return 0;
}
