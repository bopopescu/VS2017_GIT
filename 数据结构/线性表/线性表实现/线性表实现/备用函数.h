#pragma once
#include"stdafx.h"


void quick_writer(int L[] , int a,int &Length)
{
	//����������뺯��,˳���������������ڲ�
	for (int i = 0; i < a; i++)
	{
		//���ٸ�ֵ����
		L[i] = i + 1;
		Length++;
	}
}

void copy_array(int a[],int a_i,int b[])
{
	for (int i = 0; i < a_i; i++)
	{
		a[i] = b[i];

	}
}