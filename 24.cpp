#include <iostream>
using namespace std;//����ο�https://blog.csdn.net/weixin_39867200/article/details/111370091
namespace A {
	int a = 1000;
	namespace B {
		int a = 2000;
	}
}
void test03()
{
	cout << "A�е�a = " << A::a << endl; //1000
	cout << "B�е�a = " << A::B::a << endl; //2000
}
namespace people
{
	int cooker = 1;
	char drivers[30] = "have three drivers";
	int qqq();
	int qqq2()
	{
		int po = 5;
		cout <<"�����ռ��еĺ�����"<< cooker<<endl;//6
		return  po;
	}
}
namespace 
{
	int name = 123;
}
int qqq()
{
	cout << name<<endl;//3
	int a = 4;
	cout << "people��cooker= " << people::cooker << endl;//4
	people::qqq2();//5
	cout << people::qqq2()<<endl;
	return a=a+2;//7

}
int mai54234n()
{
	cout << name << endl;//1
	cout << qqq() << " and "<<endl;//2
	cout << "people��cooker= " << people::cooker << endl;//8
	cout << "people��drivers= "<<people::drivers;//9
	qqq();
	return 0;
}