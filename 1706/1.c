#include<stdio.h>
void printPatt(int n)
{
	int i,j;
	for (i=n ; i>0 ; i--)
    {
	j=i;
    	while(j>0)
        {
          printf("* ");
          j--;
        }
      printf("\n");
    }
 }
void main(){
  int n;
  scanf("%d",&n);
  printPatt(n);
}

