#include<iostream>
#include<string>

using namespace std;

int main()
{
	long long num = 100;
	cout << "hello world" << endl;
	cout << "num = " << num << endl;
	cout << "sizeof(long long) = " << sizeof(num) << endl;
	
	double f1 = 3.1415926;
	//f1 = 3.1415e-2;
	cout << "f1 = " << f1 << endl;
	//3e2 = 3*10^2

	char ch = 'aa';
	cout << "sizeof(char) = " << int(ch) << endl;
	cout << "\\\n";
	cout << "aaaaa\t hello world" << endl;
	cout << "aaa\t hello world" << endl;

	char ch1[15] = "hello world";
	string ch2 = "hello world";
	cout << ch1[1] << endl;
	cout << ch2 << endl;

	//bool
	bool flag = true;
	cout << flag << endl;

	cout << endl;
	/*int a1;
	cin >> a1;
	cout << "a1 = " << a1 << endl;
	char ch3[10];
	cin >> ch3;
	cout << ch3 << endl;*/

	cout << endl;
	int a2 = 23;
	int b2 = 12;
	int c2 = 0;
	cout << !a2 << endl;
	cout << (a2 && b2) << endl;
	cout << (a2 && c2) << endl;

	system("pause");
	return 0;
}