#pragma once
#include"stdafx.h"
#include <iostream>
using namespace std;

struct point //����ڵ�
{
	int database[100];
	int length;
};

void Init_Sqlist(point&L)
{
	int a;

	printf("������Ҫ������Ԫ�صĸ���:\t");

	cin >> a;

	for (int i = 0; i < a; i++)

	{

		printf("�������%d��Ԫ��\t", i + 1);

		cin >> L.database[i];

		L.length++;
	}
}

void show(point&L)
{

	int i;

	printf("���Ա��е�Ԫ��Ϊ:\n");

	for (i = 0; i<L.length; i++)

		printf("%d\t", L.database[i]);

	printf("\n");

}