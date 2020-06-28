#include<stdio.h>
#include<conio.h>
int main()
{
	int n,temp,sum=0,r;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum=sum+(r*r*r);
	}
	if(temp==sum)
	printf("given no. is armstrong");
	else
	printf("given no. is not armstrong");
	return 0;
	
}
