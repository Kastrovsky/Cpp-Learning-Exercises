/*
 * 题号：37
 * 题目：学生成绩管理系统（7-9）
 * 描述：读入 n 名学生信息，按总分降序、同分按学号升序排序，
 *      输出所有非班干部学生的 姓名 学号 总分；若无则输出 None。
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<algorithm>
using namespace std;

struct Stu
{
    string name;
    long int num;
    int m;     // 数学
    int e;     // 英语
    char gb;   // 是否班干部
};

// 自定义排序：总分降序，同分按学号升序
bool cmp(Stu &a,Stu &b)
{
	int totalA=a.m+a.e;
	int totalB=b.m+b.e;
	if(totalA!=totalB)
	{
		return totalA>totalB;
	}
	else
	{
		return a.num<b.num;
	}
}
int main()
{
    int n,count=0;
    cin>>n;
    Stu *s=new Stu[n];  // 动态分配
    cin.ignore();  // 吸收换行，便于后续 getline 读姓名
    for(int i=0;i<n;i++)
    {
		getline(cin,s[i].name);  // 姓名可能含空格
   		cin>>s[i].num>>s[i].m>>s[i].e>>s[i].gb;
   		if(s[i].gb=='N')
		{
			count++;  // 统计非班干部人数
		}
		cin.ignore();  // 为下一次 getline 清除换行
	}
	if(count==0)
	{
		cout<<"None";
	}
	else
	{
		sort(s,s+n,cmp);  // 使用自定义比较函数排序
		for(int i=0;i<n;i++)
		{
			if(s[i].gb=='N')  // 仅输出非班干部
			cout<<s[i].name<<" "<<s[i].num<<" "<<s[i].m+s[i].e<<endl;
		}
	}
	
	delete[] s;  // 释放内存
	return 0;
}
