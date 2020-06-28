#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char*months[]={"mar","apr","may","jun","july","aug","sep","oct","nov","dec","jan","feb"};
char*days[]={"sunday","monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
int day(int date,int month,int year);
int main()
//using zellers rule f=k+[(13*m-1)/5]+D+[D/4]+[c/4]-2*c
//Ex for 29 jan 2064
//k---day of the month as 29
//m-month number as march=1 ..feb=12,so here it is 11
//D--last two digit of year from above it is 64
//c--first two digit of year from above it is 20
{
	int k,m,year,i,flag=0,dates;
	char str[3],Day[100];
	printf("enter first 3 letters of month of the year ex:-for january enter jan\n");
	scanf("%s",str);
	for(i=0;i<12;i++)
	{
		if(!strcmp(str,months[i]))
		{
			m=i+1;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("invalid month\n");
		exit(0);
	}
	printf("enter year\n");
	scanf("%d",&year);
	if(m==1 || m==3 || m==5 || m==6 || m==8 || m==10 || m==11)
	{
		dates=31;
	}
	if(m==2 || m==4 || m==7 || m==9)
	{
		dates=30;
	}
	if(m==12)
	{
		if(year%400==0)
		{
			dates=29;
		}
		else if(year%100==0)
		{
			dates=28;
		}
		else if(year%4==0)
		{
			dates=29;
		}
		else
		{
			dates=28;
		}
	}
	printf("-sunday--monday--tuesday--wednesday--thrusday--friday--saturday-\n");
	for(i=1;i<=dates;i++)
	{
		int finalday=Day(i,m,year);
		if(finalday==0)
		printf("%4d",i);
		if(finalday==1)
		{
			if(i!=1)
			printf("%8d",i);
			else
			printf("%12d",i);
			}
			if(finalday==2)
			{
				if(i!=1)
				printf("%8d",i);
				else
				printf("%20d",i);
			}
			if(finalday==3)
			{
				if(i!=1)
				printf("%9d",i);
				else
				printf("%29d",i);
			}
			if(finalday==4)
			{
				if(i!=1)
				printf("%11d",i);
				else
				printf("%40d",i);
			}
			if(finalday==5)
			{
				if(i!=1)
				printf("%10d",i);
				else
				printf("%50d",i);
			}
			if(finalday==6)
			{
				if(i!=1)
				printf("%8d\n",i);
				else
				printf("%58d\n",i);
			}
	}
	printf("\n");

	}
	int day(int k,int m,int year)
	{
		int D,C,i,f,finalday,flag=0;
		char day[100];
		if(k<=0||k>31)
		{
			printf("invalid date\n");
			exit(0);
		}
		if(m==11||m==12)
		{
			year=year-1;
		}
		D=year%100;
		C=year/100;
		f=(k+(((13*m)-1)/5)+D+(D/4)+(c/4))-(2*c);
		if(f>=0)
		{
			finalday=f%7;
			}
			else
			{
				finalday=((f%7)+7)%7;
			}
			return(finalday);
	}
