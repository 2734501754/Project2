#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std; 
//ofstream         //文件写操作 内存写入存储设备 
//ifstream         //文件读操作，存储设备读取到内存中
//fstream          //读写操作，对打开的文件可进行读写操作 
void file_it(ostream& os, double fo, const double fe[], int n);
const int LIMIT = 5;
int ma4232in()
{
	ofstream fout;
	const char* fn = "data.txt";
	fout.open(fn);
	if (!fout.is_open())
	{
		cout << "Can't open " << fn << ". Bye.\n";
		exit(EXIT_FAILURE);
	}
	double objective;
	cout << "Enter the focal length of your "
		"telescope objective in mm: ";
	cin >> objective;
	double eps[LIMIT];
	cout << "Enter the focal lengths, in mm, of " << LIMIT
		<< " eyepieces:\n";
	for (int i = 0; i < LIMIT; i++)
	{
		cout << "Eyepiece #" << i + 1 << ": ";
		cin >> eps[i];
	}
	
	cout << 1.1+1.1234567<<endl;
	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
	cout << "Done\n";
	int n = cout.precision(9);
	cout << 1.1 + 1.1<<endl;
	cout << 2.2 + 2<<endl;
	cout.precision(n);
	cout << 1.1 + 1.1;

	return 0;
}
void file_it(ostream& os, double fo, const double fe[], int n)
{

	ios_base::fmtflags initial = os.setf(ios_base::fixed);
	os.precision(0);
	os << "Focal length of objective : " << fo << " mm\n";
	os.setf(ios::showpoint);
	os.precision(4);
	os.width(12);
	os << "f.1. eyepiece";
	os.width(15);
	os << "magnification" << endl;
	for (int i = 0; i < n; i++)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;
	}
	os.setf(initial);
	
	os << 1.1 + 2.2;
	
}
int m655ain()
{
	//cout.setf(ios_base::fixed);
	//ios_base::fmtflags initial1 = cout.precision(9);
	//cout << 1.1 + 1.1 << endl;
   //cout << 2.2 + 1 << endl;
	//cout.precision(initial1);
	//cout << 1.1 + 1.1<<endl;
	//ios_base::fmtflags initial2 = cout.setf(ios_base::fixed);
	cout << 123231634/1.423232<< endl;
	//cout.setf(initial2);
	cout << 123231634 / 1.423232 <<endl;
	//const int a = 4;
	//int b = 5;
	//b = a;
	return 0;
}