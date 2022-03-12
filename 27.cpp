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
	void getDebt(Debt& rd)//Debt& rd=zippy （zippy‘s type is Debt）
	{
		getPerson(rd.name);
		std::cout << "Enter debt: ";
		std::cin >> rd.amount;
	}
	void showDebt(const Debt& rd)//const Debt&rd=golf  (golf's type is Debt), Using rd is the same as using golf
	{                              
		showPerson(rd.name);//使用rd和使用golf一样，因为golf是Debt类型，所以相当于golf.name，golf是Debt类型，
		//所以结果就是Debt结构中的Person name，所以rd.name的类型是Person
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