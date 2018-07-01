#include<stdio.h>
struct student
{
	int  rec;
	int  id;
	char name; 
	char state;
	int  age;
}s[10];
int main()
{
	int i;	
	printf("RECORD_NO : ID_NO : NAME     : STATE        : AGE ");
	for (i=0 ; i<10 ; i++)
		scanf("%d %d %s %s %d",&s.rec,&s.id,&s.name,&s.state,&s.age);
	printf("\n");
}
