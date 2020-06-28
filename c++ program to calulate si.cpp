#include<iostream>
using namespace std;
int main()
{
	float p,r,t,si;
	cout<<"enter the principle\n";
	cin>>p;
	cout<<"enter the rate of interest\n";
	cin>>r;
	cout<<"enter the time\n";
	cin>>t;
	si=(p*r*t)/100;
	cout<<"simple interest="<<si;
}
