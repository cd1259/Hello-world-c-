#pragma once
#include<iostream>
#include"tongxuncontext.h"
using namespace std;
void addp()
{
	cout << "依次输入姓名、年龄、电话号码" << endl;
	int i = 0;
	while (arr[i].id != 0)
	{
		i++;
	}
	cin >> arr[i].name;
	cin >> arr[i].age;
	cin >> arr[i].num;
	arr[i].id = 1;
}
void show()
{
	int i = 0;
	while (arr[i].id != 0)
	{
		cout << "姓名：" << arr[i].name << " 年龄" << arr[i].age << " 电话号码" << arr[i].num << endl;
		i++;
	}
	if (arr[0].id == 0)
		cout << "通讯录为空" << endl;
}
void deletep()
{

}
void findp()
{

}
void change()
{

}
