#include<iostream>
using namespace std;
int main()
{
	float m,p,c,h,e,avg;
	cout<<"enter the marks of maths:";
	cin>>m;
	cout<<"enter the marks of physics:";
	cin>>p;
	cout<<"enter the marks of chemistry:";
	cin>>c;
	cout<<"enter the marks of hindi:";
	cin>>h;
	cout<<"enter the marks of english:";
	cin>>e;
	avg=(m+p+c+h+e)/5;
	cout<<"avg="<<avg;
	return 0;
	
}
