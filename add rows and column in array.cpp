#include<stdio.h>
int main()
{
	int SIZE=10;
	int first[SIZE][SIZE];
	int second[SIZE][SIZE];
	int third[SIZE][SIZE];
	int rows,cols,i,j;
	printf("enter the number of rows and column");
	scanf("%d%d",&rows,&cols);
	printf("enter %d element of first array\n",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			scanf("%d",&first[i][j]);
		}
	}
	printf("enter %d element of second array\n",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			scanf("%d",&second[i][j]);
		}
	}
	printf("enter the third matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			third[i][j]=first[i][j]+second[i][j];
			printf("%5d",third[i][j]);
		}
		printf("\n");
	}
	}
