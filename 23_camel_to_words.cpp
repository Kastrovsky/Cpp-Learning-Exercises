/*
 * 题号：23
 * 题目：驼峰命名法转原单词（str 大小写转换）
 * 描述：输入驼峰命名字符串，按单词拆分并以空格分隔，每个单词首字母转为小写。
 */
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char ori[100];
    cin>>ori;
    cout<<(char)tolower(ori[0]);  // 首字母转小写直接输出
    for(int i=1;i<strlen(ori);i++)
    {
        if(isupper(ori[i]))  // 遇到大写，先空格再输出小写
        {cout<<" "<<(char)tolower(ori[i]);}
        else
        {cout<<(char)tolower(ori[i]);}
    }
    return 0;
}
