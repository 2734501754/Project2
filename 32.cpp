#include<iostream>
#include"stock10.h"
int main()
{
	{
		using std::cout;
		cout << "Using constructors to create new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);//隐式调用构造函数，等同于Stock stock1=Stock("NanoSmart", 12, 20.0);
		stock1.show1();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);//显示调用构造函数
		stock2.show1();
		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2:\n";
		stock1.show1();
		stock2.show1();
		cout << "Using a constructor to reset an object\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);
		cout << "Revised stock1:\n";
		stock1.show1();
		cout << "Done\n";
	}
	return 0;
}