#include<iostream>

using namespace std;

int main()
{
	for (int i = 0; i <= 100; i++)
	{
		cout << i << " ";
		if (i % 7 == 0)
			cout << "ÅÄ×À×Ó";
		else if (i % 10 == 7)
			cout << "ÅÄ×À×Ó";
		else if(i/10==7)
			cout << "ÅÄ×À×Ó";
		cout << endl;
	}

	return 0;
}