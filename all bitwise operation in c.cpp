#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c;
	char choice[2];
	printf("enter your choice\n& for AND\n| for OR\n^ for XOR\n~ for compliment\n<< for left shift\n>> for right shift\n");
	scanf("%s",choice);
	printf("enter a and b\n");
	scanf("%d%d",&a,&b);
	if(strcmp(choice,"&")==0)
	{
		c=a&b;
		printf("%d & %d=%d\n",a,b,c);
	}
	else if(strcmp(choice,"|")==0)
	{
		c=a|b;
		printf("%d & %d=%d\n",a,b,c);
	}
	else if(strcmp(choice,"^")==0)
	{
		c=a^b;
		printf("%d ^ %d=%d\n",a,b,c);
	}
	else if(strcmp(choice,"~")==0)
	{
		printf("~ %d=%d\n",a,~a);
		printf("~ %d=%d\n",b,~b);
		}
		else if(strcmp(choice,"<<")==0)
		{
			c=a<<b;
			printf("%d << %d=%d\n",a,b,c);
			}
			else if(strcmp(choice,">>")==0)
			{
				c=a>>b;
				printf("%d >> %d=%d\n",a,b,c);
			}
			else
			{
				printf("invalid choice\n");
			}
}
