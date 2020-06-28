#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter any alphabet\n";
	cin>>ch;
	switch(ch)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':	
		cout<<"vowel";
		break;
		default:
			cout<<"consonent";
		}
		return 0;
			
}
