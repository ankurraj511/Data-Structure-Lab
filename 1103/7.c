#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char stack[20];
char p[18];
char q[18]={'4','*','(','5','+','1',')','-','8','/','4'};
int prec(char ch)
{
	if(ch=='+' || ch=='-')
		return (1);
	if(ch=='*' || ch=='/')
		return (2);
	if(ch=='^')
		return (3);
}
int avail=0;
void push(char ch)
{
	int avail;
	stack[avail++]=ch;
}
char pop()
{
	char ch;
	ch=stack[--avail];
	return (ch);
}
void main()
{
	int i=0,j=0,flag;
	char element;
	printf("infix expression: %s",q);
	strcat(q,")");
	push('(');
	while(q[i]!='\0')
	{
		flag=1;
		if (isdigit(q[i]))
		{
			p[j]=q[i];
			j=j+1;
		}
		if (q[i]=='(')
			push(q[i]);
		if (q[i]=='+' || q[i]=='-' || q[i]=='*' || q[i]=='/' || q[i]=='^')
		{
			while(flag==1)
			{
				element=pop();
				if (element== '+' || element== '-' || element== '*' || element== '/' || element== '^')
				{ 
					if (prec(element)>=prec(q[i]))
						p[j++]=element;
					else
					{
						push(element);
						flag=0;
						push(q[i]);
					}
				}
				else
				{
					push(element);
					flag=0;
					push(q[i]);
				}
			}
		}
		if (q[i]==')')
		{
			while(1)
			{
				element=pop();
				if(element=='(' || element=='\0')
					break;
				else
				{
					while(element!='(' || element!='\0')
					{
						p[j++]=element;
						element=pop();
					}
				}
			}
		}	
		i=i+1;
	}
	printf("\n\n %s",p);
}
					
