#include<stdio.h>
#include<conio.h>
int main()
{
	int rows,column,i,j;
	printf("enter the number of rows and column");
	scanf("%d%d",&rows,&column);
	for(i=0;i<=rows;i++)
	{
		printf("enter the nine elements of first array");
		scanf("%d",&i);
	}
	for(j=0;j<=column;j++)
	{
		printf("enter the nine elements of second array");
		scanf("%d",&j);
	}
	getch();
	
}
