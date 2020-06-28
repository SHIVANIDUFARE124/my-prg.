#include<Stdio.h>
int main()
{
	int a[5],i;
	printf("enter the 5 numbers");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("odd numbers are");
	for(i=0;i<=4;i++)
	{
	if(a[i]%2==1)
	{
		printf("\n%d",a[i]);
	}
}
return 0;
}
