#include<stdio.h>
#include<conio.h>
void change(int num)
{
	printf("before adding value inside funcation num=%d\n",num);
	num=num+100;
	printf("after adding value inside funcation num=%d\n",num);
}
int main()
{
	int x=100;
	printf("before funcation call x=%d\n",x);
	change(x);
	printf("after function call x=%d\n",x);
	return 0;
}
