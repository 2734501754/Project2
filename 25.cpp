#include<iostream>
const int ArSize = 10;
void strcount(const char* str);
using namespace std;
int mai4314n()
{
	char input[ArSize];
	char next;
	cout << "Enter a line:\n";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		cin.get(input, ArSize);
	}
	cout << "Bye\n";
	return 0;
}
void strcount(const char*str)
{
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains";
	while (*str++)//'\n'��asciiΪ0
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
int ma431241in()
{
	{
		char input[ArSize];
		char next;
		cin.get(input, ArSize);
		//cin.get();
		cin.get(next);
		//cin.get(next);
		cout << "input: " << input << '\n' << "next: " << next << endl;
		cout <<input<<" and "<<*input<<" and "<< & input << " and " << &input + 1 << endl;//char����,ֻ��&input��ָ���������飬�������Ķ���ָ��ĳһ��Ԫ�ء�
		//���Ƕ�������ЩԪ��Ϊ��ʼλ�ã����һ���ַ�������Ҳ�ͽ�����Ϊʲôֻ��&input��input+1����ȷ�����ַ
		
		
		//cin.get(input, ArSize);
		//cout << "input: " << input << '\n' << "next: " << next << endl;
	}
	{
		char input[ArSize];
		char next, next1;
		cout << "Enter a line:\n";
		cin.get(input, ArSize);
		cin.get(next);
		cin.get(next1);
		cout << "input: " << input << '\n' << "next: " << next << '\n' << next1;
	}

	return 0;
}
