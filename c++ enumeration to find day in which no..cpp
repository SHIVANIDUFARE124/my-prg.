#include"iostream"
using namespace std;
enum week
{
	monday,
	tuesday,
	wednesday,
	thrusday,
	friday,
	saturday,
	sunday,
};
int main()
{
	week day;
	day=sunday;
	cout<<"day:"<<day+1<<endl;
	return 0;
}
