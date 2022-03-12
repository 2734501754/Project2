#include<iostream>
#include"namesp.h"
namespace pers
{
	using std::cout;
	using std::cin;
	void getPerson(Person& rp)
	{
		cout << "Enter first name: ";
		cin >> rp.fname;
		cout << "Enter last name: ";
		cin >> rp.lname;
	}
	void showPerson(const Person& rp)//const Person& rp=rd.name (rd.name's type is Person)
	{                                                     
		std::cout << rp.lname << ", " << rp.fname;
	}
}
namespace debts
{
	void getDebt(Debt& rd)//Debt& rd=zippy ��zippy��s type is Debt��
	{
		getPerson(rd.name);
		std::cout << "Enter debt: ";
		std::cin >> rd.amount;
	}
	void showDebt(const Debt& rd)//const Debt&rd=golf  (golf's type is Debt), Using rd is the same as using golf
	{                              
		showPerson(rd.name);//ʹ��rd��ʹ��golfһ������Ϊgolf��Debt���ͣ������൱��golf.name��golf��Debt���ͣ�
		//���Խ������Debt�ṹ�е�Person name������rd.name��������Person
		std::cout << ": $" << rd.amount << std::endl;
	}
	double sumDebts(const Debt ar[], int n)
	{
		double total = 0;
		for (int i = 0; i < n; i++)
			total += ar[i].amount;
		return total;
	}
}