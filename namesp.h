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
		Person name;//����һ��Person�ṹ��ı�������������д洢�������ַ������͵Ľṹ���Ա
		double amount;
	};
	void getDebt(Debt&);
	void showDebt(const Debt&);
	double sumDebts(const Debt ar[], int n);
}