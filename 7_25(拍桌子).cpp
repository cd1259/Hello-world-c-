#include<iostream>

using namespace std;

int main()
{
	for (int i = 0; i <= 100; i++)
	{
		cout << i << " ";
		if (i % 7 == 0)
			cout << "������";
		else if (i % 10 == 7)
			cout << "������";
		else if(i/10==7)
			cout << "������";
		cout << endl;
	}

	return 0;
}