﻿// experiment.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;//输出char类型数据的长度
	cout << "int length:" << sizeof(int) << endl;//输出int类型数据的长度
	cout << "float length:" << sizeof(float) << endl;//输出float类型数据的长度
	cout << "double length:" << sizeof(double) << endl;//输出double类型数据的长度
	cout << "string length:" << sizeof(string) << endl;//输出string类型数据的长度
	cout << "bool length:" << sizeof(bool) << endl;//输出bool类型数据的长度
	return 0;
}