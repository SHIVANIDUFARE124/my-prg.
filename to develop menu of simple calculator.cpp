#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b;
	int choice;
	while(1)
	{
		printf("\nenter two numbers:");
		scanf("%f%f",&a,&b);
		printf("\n1.add");
		printf("\n2.subtract");
		printf("\n3.multiply");
		printf("\n4.divide");
		printf("\n5.exit");
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("%f",(a+b));
				break;
			case 2:
				printf("%f",(a-b));
				break;
			case 3:
				printf("%f",(a*b));
				break;
			case 4:
				printf("%f",(a/b));
				break;
			case 5:
				exit(0);
			default:
				printf("wrong choice");
				
		}
	}
	return 0;
}
