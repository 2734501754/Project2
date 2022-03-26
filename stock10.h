#ifndef STOCK10_H_
#define STOCK01_H_
#include<string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
    Stock();//1.创建一个没有参数的默认构造函数
	Stock(const std::string& co, long n = 0, double pr=0.0);//创建一个构造函数
	~Stock();//创建一个析构函数
	void buy1(long num, double price);
	void sell1(long num, double price);
	void update1(double price);
	void show1();
};
#endif;