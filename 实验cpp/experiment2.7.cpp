// experiment2.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 6; i++)//定义一个循环 i为行数 一共五行 i<6
	{
		for (int j = 1; j <= i; j++)//定义嵌套循环 j为打印*数
		{
			cout << '*';//打印*
		}
		cout << endl;//本行打印完换行
	}
	return 0;
}