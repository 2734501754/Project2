#include<iostream>
#include"namesp.h"
void other(void);
void another(void);
int main(void)
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = { {"Benny","Goatsniff"},120.0 };//Person name是一个Person结构体变量，Person结构体中存储着两个string类型的结构体成员
	showDebt(golf);                                          //所以Benny和Goatsniff分别赋值给Person结构体中的那两个成员
	other();
	another();
	return 0;
}
void other(void)
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = { "Doodles","Glister" };
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++)
		getDebt(zippy[i]);
	for (i = 0; i < 3; i++)
		showDebt(zippy[i]);
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
	return;
}
void another(void)
{
	using pers::Person;
	Person collector = { "Milo","Rightshift" };
	pers::showPerson(collector);
	std::cout << std::endl;
}