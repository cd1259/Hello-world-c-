#pragma once
#include<iostream>
#include"tongxuncontext.h"
using namespace std;
void addp()
{
	cout << "�����������������䡢�绰����" << endl;
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
		cout << "������" << arr[i].name << " ����" << arr[i].age << " �绰����" << arr[i].num << endl;
		i++;
	}
	if (arr[0].id == 0)
		cout << "ͨѶ¼Ϊ��" << endl;
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
