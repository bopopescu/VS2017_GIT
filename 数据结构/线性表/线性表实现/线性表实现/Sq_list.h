#pragma once
#include"stdafx.h"
#include <iostream>
#include"���ú���.h"

using namespace std;

struct sqlist //����ڵ�
{
	int *elem;//˳�����������ָ��,��ʼ��ָ��Ϊ(���ͱ���)
	int base_size = 5;//���Ա�ĳ�ʼ���ռ�
	int add_long = 5;//���Ա�Ŀռ䲻��������ֵ
	int length = 0;//���Ա�ĳ���

};

void Init_Sqlist(sqlist&L)
{
	//L.elem = (int *)malloc(L.base_size * sizeof(int));//��ͳ��������������
	L.elem = new int[L.base_size];//new����һ���ռ�Ļ�����Ҫ����ֱ��д��С,��new int [20],������new int A[20];
	//����һ���յ�˳�����Ա�
	int a = 5;//�����õ���ֵ
	/*for (int i = 0; i < a; i++)
	{
			printf("�������%d��Ԫ��\t", i + 1);
			cin >> L.elem[i];
			L.length++;
	}*/

	quick_writer(L.elem,a,L.length);
}

void show(sqlist&L)
{
	//չʾ���нڵ������Ԫ��
	int i;

	printf("���Ա��е�Ԫ��Ϊ:\n");

	for (i = 0; i<L.length; i++)

		printf("%d\t", L.elem[i]);

	printf("\n");

}

void destory(sqlist &L)
{
	//�������Ա�
	delete[]L.elem;//�ͷ��ڴ�ռ�
	L.elem = NULL;
}

void clear_sqlist(sqlist&L)
{
	//������Ա�,�����Ƿ�Ϊ��,ȫ������Ϊ
	L.length = 0;
}

bool listempty(sqlist&L)
{
	//�ж����Ա��Ƿ�Ϊ��,Ϊ���Ƿ���true(1),����false(0)
	if (L.length == 0)return true;
	else return false;
}

int listlength(sqlist&L)
{
	//�������Ա���Ԫ�ظ���
	return L.length;
}

bool getElem(sqlist&L,int i,int &e)
{
	//�������Ա��еĵ�i������Ԫ�ص�ֵ,ʹ��(e)����,��������ֵΪtrue��false
	if (i <= L.length)
	{
		e = L.elem[i - 1];
		return true;
	}
	else
		return false;
}

bool listInsert(sqlist &L, int i, int &e)
{
	//����ڵ�,��Ҫ���ֽڵ��λ��,(1)�ռ��Ѿ���,��Ҫ���·���ռ�//
	//if (L.length)
	//int *a;
	//a = new int [L.length];//�½�һ������,���ڴ���ԭ����
	//copy_array(a, L.length, L.elem);
	//if ()
	//��ʱ��֪����λ�ȡ�����Ƿ�Ϊ������
	return true;
}