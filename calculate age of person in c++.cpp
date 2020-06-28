#include<iostream>
using namespace std;
int main()
{
	int d1,d2,d,m1,m2,m,y1,y2,y,daysinmon[]={31,31,28,31,30,31,30,31,30,31,30,31};
	cout<<"enter your dob(dd mm yyyy)";
	cin>>d1>>m1>>y1;
	cout<<"enter the current date[dd mm yyyy]";
	cin>>d2>>m2>>y2;
	d=d2-d1;
	m=m2-m1;
	y=y2-y1;
	if(d2<d1)
	{
		m2--;
		if(m2==2&&((y2%4==0&&y2%100!=0)||(y2%400==0)))
		{
			daysinmon[2]++;
		}
		d2+=daysinmon[m2];
		d=d2-d1;
	}
		if(m2<m1)
		{
			y2--;
			m=m2+12-m1;
		}
		cout<<"the age of person"<<"year="<<y<<"month="<<m<<"days="<<d;
		return 0;
}
