/*
 * 题号：29
 * 题目：判断字符串是否回文（7-20，指针实现）
 * 描述：用指针方法判断输入字符串是否为回文，是输出 1，否输出 0。
 */
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>
using namespace std;

// 指针法判断回文：头尾向中间比对
int isPalindrome(char *str)
{
    char *start=str,*end=str+strlen(str)-1;  // 首尾指针
    while(start<end)
    {
        if(*start!=*end)
        return 0;
        start++;
        end--;
    }
    return 1;
}
int main()
{
    char str[100];
    cin.getline(str,100);
    int r=isPalindrome(str);
    if(r==1)
        cout<<1;
    else
        cout<<0;
    return 0;
}
