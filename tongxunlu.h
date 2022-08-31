#include<iostream>
#include"tongxundo.h"
using namespace std;

void menu()
{
	cout << "*****" << "1.添加联系人" << "*****" << endl;
	cout << "*****" << "2.显示联系人" << "*****" << endl;
	cout << "*****" << "3.删除联系人" << "*****" << endl;
	cout << "*****" << "4.查找联系人" << "*****" << endl;
	cout << "*****" << "5.修改联系人" << "*****" << endl;
	cout << "*****" << "0.退出通讯录" << "*****" << endl;
	cout << "请输入：" << endl;
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
			cout << "退出通讯录" << endl;
			break;
		default:
			cout << "请重新输入" << endl;
			break;
		}
	} while (flag == 1);
}
