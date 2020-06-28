#include<iostream>
using namespace std;
int main()
{
	string username;
	string password;
	cout<<"please input username:";
	cin>>username;
	cout<<"please input password:";
	cin>>password;
	if(username=="admin")
	{
		if(password=="password")
	
	{
		cout<<"congratulation login !"<<endl;
	}
	else
	{
		cout<<"invalid password !"<<endl;
	
}
	}
	else
	{
		cout<<"invalid username !"<<endl;
	}
	return 0;
}
