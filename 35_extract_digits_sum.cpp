/*
 * 题号：35
 * 题目：字符串提取数字求和（7-7）
 * 描述：多行字符串，对每行提取其中所有数字字符，将其数值累加后按行输出结果。
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
	string line;
	while(getline(cin,line))  // 逐行读取
	{
		int count=0;
		for(char c:line)
		{
			if(isdigit(c))  // 仅处理数字字符
			{
				count+=(c-48);;  // 字符数字转数值后累加
			}
		}
		cout<<count<<endl;  // 每行输出一个整数
		
	}
	
}
