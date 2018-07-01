#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int stacks[20];
char p[18]={'4','5','1','+','*','8','4','/','-'};
int top=0;
void push(int n)
{
	stacks[top++]=n;
}
int pop()
{
	int temp;	
	temp=stacks[--top];
	stacks[top]=0;	
	return temp;
}
int main()
{
	int i=0,num,a,b,result;
	//char p[18];
	//printf("enter the expression: ");
	//scanf("%s",&p);
	printf("Postfix experession: %s",p);
	strcat(p,")");
	while(p[i]!=')')
	{
		if(isdigit(p[i]))
		{
			num=p[i]-'0';
			push(num);
		}
		if(p[i]=='+' || p[i]=='-' || p[i]=='*' || p[i]=='/' || p[i]=='^' )
		{
			a=pop();
			b=pop();
			if (p[i]=='+')
				result=b+a;
			if (p[i]=='-')
				result=b-a;
			if (p[i]=='*')
				result=b*a;
			if (p[i]=='/')
				result=b/a;
				
			push(result);
		}
		i=i+1;
	}
	result=pop();
	printf("\n Result= %d",result);
}
