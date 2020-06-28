#include<stdio.h>
#include<conio.h>
int main()
{
	int n,temp,sum=0,r;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("not a palindrome number");
	}
	return 0;
}
