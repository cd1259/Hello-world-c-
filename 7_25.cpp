#include<iostream>

using namespace std;

int main()
{
	int i, j;
	int arr[10];
	for (i = 1; i <= 10; i++)
	{
		arr[i - 1] = 11 - i;
	}
	/*for (i = 0, j = 9; i <= j; i++, j--)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}*/
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}