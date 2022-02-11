#include<iostream>
#include<string>
using namespace std;
string version1(const string& s1, const string&s2);
const string& version2(string& s1, const string& s2);
const string& version3(string& s1, const string& s2);
int mai5277n()
{
	string input;
	string copy;
	string result;
	cout << "Enter a string: ";
	getline(cin, input);
	copy = input;
	cout << "Your string as entered: " << input << endl;
	result = version1(input, "***");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;
	result = version2(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;
	cout << "Resetting original string.\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	return 0;
}
string version1(const string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}
const string& version2(string& s1, const string& s2)
{
	s1 = s2 + s1 + s2;
	return s1;
}
//注意看返回值的类型是什么
const string& version3(string& s1, const string& s2)
{//虽然是return temp,但是函数声明里写的就是返回引用,所以返回的就是temp的引用
 //然后又因为temp的引用不存在，所以version3这错了

	string temp;
	temp = s2 + s1 + s2;
	return temp;
}






