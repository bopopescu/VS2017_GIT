#pragma once
#include"stdafx.h"
#include <iostream>
using namespace std;

struct point //����ڵ�
{
	int *elem;
	int base_size = 5;
	int add_long = 5;
	int length;
	int database_long;
};

void Init_Sqlist(point&L)
{
	int a;

	printf("������Ҫ������Ԫ�صĸ���: ");
	cin >> a;

	//L.elem = (int *)malloc(L.base_size * sizeof(int));//��ͳ��������������
	L.elem = new int[a];//new����һ���ռ�Ļ�����Ҫ����ֱ��д��С,��new int [20],������new int A[20];

	/*for (int i = 0; i < a; i++)
	{
			printf("�������%d��Ԫ��\t", i + 1);
			cin >> L.elem[i];
			L.length++;
	}*/
	for (int i = 0; i < a; i++)
	{
		//���ٸ�ֵ����
		L.elem[i] = i+1;
		L.length++;
	}
	
}

void show(point&L)
{

	int i;

	printf("���Ա��е�Ԫ��Ϊ:\n");

	for (i = 0; i<L.length; i++)

		printf("%d\t", L.elem[i]);

	printf("\n");

}