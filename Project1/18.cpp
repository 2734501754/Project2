#include<iostream>
using namespace std;
const int ArSize = 80;
char* left(const char* str, int n = 1);
int ma431in()
{
	char sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);
	char* ps = left(sample, 4);
	cout << ps << endl;
	//delete[]ps;
	ps = left(sample);
	cout << ps << endl;
	delete[]ps;
	return 0;
}
char* left(const char* str, int n)
{
	if (n < 0)
	n = 0;
	char* p = new char[n+1];
	//char p[6];
	int i;
	for (i = 0; i < n && str[i];i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}
int ma323in()
{
	double x=4;
	double&& a = 4;
	const double& b = x + 1;
	cout << a;
	return 0;
}