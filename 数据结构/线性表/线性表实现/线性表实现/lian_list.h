#pragma once
#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std;

struct list
{
	char name[20];
	char sex[5];
	int number;
	list *next = NULL;
	list *back = NULL;//˫���б�,������������
};

list * list_init(int n)
{
	//����m���ڵ�
	list *p1, *p2, *head;
	head = new list;
	head->back = NULL;
	//�˴���Ϊ�˸�ͷָ�븳ֵ,ʹ��p1->back��ָ�뷽��,�Ӷ�ʹ�õ����������ʵ��
	p1 = new list;
	p1->back = head;
	//NULL��Ϊ��head
	p2 = new list;
	p2->back = p1;
	head = p1;
	for (int i = 0; i < n; i++)
	{
		strcpy_s(p1->name, 5, "test");
		p1->number = i+1;
		p1->next = p2;
		p2->back = p1;
		p1 = p2;
		p2 = new list;
	}
	p2->next = NULL;
	p2->back = p1;
	return head;
}

void show_list(list *head)
{
	list *p1; int i=0;//�ڵ�������־��
	p1 = head;
	while (p1->next != NULL && head != NULL)
	{
		cout << p1->name << ' ' << p1->number << endl;
		p1 = p1->next;
		i++;
	}
	cout << "back show " << i << endl;
	/*p1 = p1->back;
	while (p1->back != NULL && head != NULL)
	{
		cout << p1->name << ' ' << p1->number << endl;
		p1 = p1->back;
	}
	cout << p1->name << ' ' << p1->number << endl;*/
	//����p1->back��NULL,�����޷�ִ��ѭ��,����ں���������һ�д������p1
	//�������Ϊforѭ���������
	p1 = p1->back;
	for (int j = 0; j < i&&p1->back!=NULL; i++)
	{
		cout << p1->name << ' ' << p1->number << endl;
		p1 = p1->back;
	}
	//����ֻ����������4��ֵ
	//����ǰ���ͷָ��head
}