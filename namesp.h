#include<iostream>
namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person&);
	void showPerson(const Person&);
}
namespace debts
{
	using namespace pers;
	struct Debt
	{
		Person name;//定义一个Person结构体的变量，这个变量中存储着两个字符串类型的结构体成员
		double amount;
	};
	void getDebt(Debt&);
	void showDebt(const Debt&);
	double sumDebts(const Debt ar[], int n);
}