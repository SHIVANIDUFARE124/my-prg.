#include<stdio.h>
int main()
{
	int SIZE=100;
	int arr[SIZE],num,max,min;
	printf("enter the number of elements:");
	scanf("%d",&num);
	printf("enter %d elements:",num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(int i=1;i<num;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\nlargest element:%d",max);
	printf("\nsmallest element:%d",min);
	return 0;
	
	
	}
