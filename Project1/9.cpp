#include<iostream>
#include<array>
#include<string>
using namespace std;
void countdown(int n);
int m367ain()
{
	countdown(4);
	return 0;
}
void countdown(int n)
{
	cout << "Counting down..." << n << endl;
	if (n > 1)
		countdown(n -1);
		cout << n << ": Kaboom!\n";
}
