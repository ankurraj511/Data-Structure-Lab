#include<stdio.h>
#include<malloc.h>
struct node
{
	struct node *prv;
	int num;
	struct node *next;
};
struct node *start;
void nodes(int n)
{
	start=malloc
