#include<iostream>
#include"tongxundo.h"
using namespace std;

void menu()
{
	cout << "*****" << "1.�����ϵ��" << "*****" << endl;
	cout << "*****" << "2.��ʾ��ϵ��" << "*****" << endl;
	cout << "*****" << "3.ɾ����ϵ��" << "*****" << endl;
	cout << "*****" << "4.������ϵ��" << "*****" << endl;
	cout << "*****" << "5.�޸���ϵ��" << "*****" << endl;
	cout << "*****" << "0.�˳�ͨѶ¼" << "*****" << endl;
	cout << "�����룺" << endl;
}

void displaymenu()
{
	int a;
	int flag = 1;
	do
	{
		cin >> a;
		switch (a)
		{
		case 1:
			addp();
			break;
		case 2:
			show();
			break;
		case 3:
			deletep();
			break;
		case 4:
			findp();
			break;
		case 5:
			change();
			break;
		case 0:
			flag = 0;
			cout << "�˳�ͨѶ¼" << endl;
			break;
		default:
			cout << "����������" << endl;
			break;
		}
	} while (flag == 1);
}
