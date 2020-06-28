#include<iostream>
using namespace std;
int main()
{
	int a,b,m=1,i;
	cout<<"enter the first number:"<<endl;
	cin>>a;
	cout<<"enter the second number:"<<endl;
	cin>>b;
	for(i=a;;i++)
	{
		if(i%a==0&&i%b==0)
		{
			m=i;
			break;
		}
	}
	cout<<"the LCM of"<<a<<"and"<<b<<"is"<<m;
	return 0;
	
}
