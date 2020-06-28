#include<iostream>
#include<string.h>
using namespace std;
union student
{
	char name[200];
	int rollno;
	float marks;
};
int main()
{
	union student obj;
	strcpy(obj.name,"anil singhania");
	obj.rollno=87;
	obj.marks=86.4;
	cout<<"name="<<obj.name<<"\n";
	cout<<"rollno="<<obj.rollno<<"\n";
	cout<<"marks="<<obj.marks;
	}
