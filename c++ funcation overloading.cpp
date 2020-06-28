#include<iostream>
using namespace std;
class cal{
	public:
		static int add(int a,int b)
		{
			return a+b;
		}
		static int add(int a,int b,int c)
		{
			return a+b+c;
		}
};
int main()
{
	cal c;
	cout<<c.add(10,20)<<endl;
	cout<<c.add(12,20,23)<<endl;
	return 0;
}
