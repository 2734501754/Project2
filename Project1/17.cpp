#include <iostream>
using namespace std;
int ma3213in()
{
	struct a
	{
		char&pa;
	};
	struct b
	{
		char* pb;
	};
	struct c
	{
		char pc;
	};
	cout << "引用: "<<sizeof(a)<<" and "<<"指针: "<<sizeof(b)<<" and "<<"字符型变量: "<<sizeof(c)<<endl;
	short a = 4;
	short& b = a;
	cout << sizeof(b);
	return 0;
}
#include <cstdlib>
int mai77454n()
{
	//float a = 2.0;
	//cout.setf(ios_base::fixed);
	//cout.setf(ios_base::showpoint);
	//cout.precision(2);
	//cout << a;
	double b = 12345678;
	cout.setf(ios_base::fixed);
	cout << b;
	//cout << fixed<<b;
	return 0;
}