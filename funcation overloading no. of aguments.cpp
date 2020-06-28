#include"iostream"
using namespace std;
class cal
{
	public:
	int add(int a,int b)
	{
	return a+b; 
}
int add(int a,int b,int c)
{
	return a+b+c;
}
};
int main(void)
{
	cal c;
	cout<<c.add(10,20)<<endl;
	cout<<c.add(30,20,10)<<endl;
	return 0;
	
}

