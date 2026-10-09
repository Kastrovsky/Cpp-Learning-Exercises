/*
 * 题号：20
 * 题目：美化字符串（相邻字符不相同）
 * 描述：输入若干字符串，若相邻字符相同则需在中间插入字符使其不同。
 *      输出美化后字符串的最短长度（原长 + 需插入数）。
 */
#include<cstdio>
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();  // 清除输入缓冲区中的换行符
    char c[1000];
    
    for(int i=0;i<n;i++)
    {
        cin.getline(c,1000);
        int ori=0,count=0;
        for(int j=0;c[j]!='\0';j++)
        {
            ori++;  // 统计原字符串长度
        }
        for(int j=0;c[j]!='\0'&&c[j]!='\0';j++)
        {
            if(c[j]==c[j+1])  // 相邻相同则需插入一个字符
            {count++;}
        }
        cout<<ori+count<<endl;  // 输出最短长度
        
    }
    return 0;
}
