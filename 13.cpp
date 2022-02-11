#include <iostream>
using namespace std;
struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};
void display(const free_throws& ft);
void set_pc(free_throws& ft);
/*const*/ free_throws & accumulate(free_throws & target, const free_throws & source);
int mai234342n()
{
	free_throws one = { "Ifelsa Branch",13,14 };
	free_throws two = { "Andor Knott",10,16 };
	free_throws three = { "Minnle Max",7,9 };
	free_throws four = { "Whily Looper",5,9 };
	free_throws five = { "Long Long",6,14 };
	free_throws team = { "Throwgoods",0,0 };
	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
	dup = accumulate(team, five);
	cout << "Dsiplay team:\n";
	display(team);
	cout << "Displaying dup assignment:\n";
	display(dup);
	set_pc(four);
	accumulate(dup, five) = four;
	cout << "Displaying dup after ill-advised assignment:\n";
	display(dup);
	return 0;
}
void display(const free_throws& ft)
{
	cout << "Name: " << ft.name << '\n';
	cout << "_Made: " << ft.made << '\n';
	cout << "Attempts: " << ft.attempts << '\n';
	cout << "Percent: " << ft.percent << '\n';

}
void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;                                                                                                 //将0赋给临时变量,最终ft.percent内容不变(还是92.8571396)
}
/*const*/ free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);                                                                                                               //因为类型不匹配,所以创建临时变量
	return target;
}
int main535()
{
	int a[2][3] = { 1,2,3,4,5,6 };
	cout << a << " and " << a[0] << " and " << a[0][0];
	cout << " and " << &a[0][0]<<" and "<<a+1<<" and "<<a+2<<endl;//a+1,a+2和*(a+1),*(a+2)一样
	cout << a[1] << " and " << a[2];
	return 0;
}
