/*
 * 题号：24
 * 题目：英文短语简写（首字母缩写）
 * 描述：输入一行含若干单词的短语，只保留每个单词首字母并大写后连接输出。
 */
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char s[200];
    cin.getline(s,200);
    cout<<(char)toupper(s[0]);  // 第一个单词首字母大写
    for(int i=1;i<strlen(s);i++)
    {
        if(s[i]==' '&&i+1<strlen(s))  // 单词间的空格后一个字母大写
        {cout<<(char)toupper(s[i+1]);}
    }
    return 0;
}
