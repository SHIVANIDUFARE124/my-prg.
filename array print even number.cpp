#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter 5 numbers");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("even numbers are:");
	for(i=0;i<=4;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d",a[i]);
		}
	}
}
