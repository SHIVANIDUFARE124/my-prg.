#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"enter the number\n";
	cin>>no;
	switch(no)
	{
	case 1:
		cout<<"janurary-31";
		break;
	case 2:
		cout<<"february-28/29";
		break;
	case 3:
		cout<<"march-30";
		break;
	case 4:
		cout<<"april-31";
		break;
	case 5:
		cout<<"may-30";
		break;
	case 6:
		cout<<"june-31";
		break;
	case 7:
		cout<<"july-30";
		break;
	case 8:
		cout<<"augest-31";
		break;
	case 9:
		cout<<"september";
		break;
	case 10:
		cout<<"octumber";
		break;
	case 11:
		cout<<"november";
		break;
	case 12:
		cout<<"december";
		break;
	default:
		cout<<"invalid input";
	}
	return 0;
}
