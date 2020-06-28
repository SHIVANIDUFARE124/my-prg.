#include<stdio.h>
#include<conio.h>
int main()
{
	float speed,distance,time;
	printf("enter the distance");
	scanf("%f",&distance);
	printf("enter the time");
	scanf("%f",&time);
	speed=(distance/time);
	printf("speed of %f",speed);
	getch();
}
