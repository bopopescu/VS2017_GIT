// 线性表实现.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Sq_list.h"
#include <stdio.h>

int main()
{
	using namespace std;
	point l;
	l.length = 0;
	Init_Sqlist(l);//构建线性表,返回线性表的地址
	show(l);
	getchar();//暂停程序等待输入
	getchar();
	int *p;
	p = new int[20];
	delete(p);
	getchar();
    return 0;
}

