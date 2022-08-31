#include<iostream>

using namespace std;

int a[100];

int main()
{
	/*int score = 100;
	cin >> score;
	if (score == 100)
	{
		cout << "test" << endl;
	}
	else if (score >= 60)
	{
		cout << "test pass" << endl;
	}
	else if (score < 60)
	{
		cout << "gg" << endl;
	}*/

	int num = 100;
	int i, j;
	while (num < 10000)
	{
		int num1 = num;
		int num2 = 0;
		for (i = 0; num1 != 0; i++, num1 /= 10)
		{
			a[i] = num1 % 10;
		}
		for (j = 0; j <= i; j++)
		{
			num2 += a[j] * a[j] * a[j];
		}
		if (num2 == num)
			cout << num << endl;
		num++;
	}

	system("pause");
	return 0;
}