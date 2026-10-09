/*
 * 题号：31
 * 题目：单词翻转（7-12）
 * 描述：输入一行句子，将其中每个单词逆序输出，单词间空格与原文保持一致。
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    char v[500];
    cin.getline(v,500);

    int i=0;
    while(v[i]!='\0')
    {
        if(v[i]==' ')  // 遇到空格直接跳过
        {
            i++;
            continue;
        }

        int start=i;  // 单词起始
        while(v[i]!='\0'&&v[i]!=' ')  // 找到单词结束
        {
            i++;
        }
        int end=i-1;  // 单词末尾
        while(start<end)  // 就地逆序单词
        {
            char t=v[start];
            v[start]=v[end];
            v[end]=t;
            start++;
            end--;
        }
    }
    cout<<v<<endl;
    return 0;
}
