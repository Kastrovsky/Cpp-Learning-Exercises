/*
 * 题号：21
 * 题目：字符串区间替换
 * 描述：输入字符串与 m 次操作，每次将区间 [l,r] 内所有字符 c1 替换为 c2，输出最终字符串。
 */
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    cin.ignore();  // 清除换行符
    char* c=new char[n+1];
    cin.getline(c,n+1);
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        char a,b;
        cin>>a>>b;
        for(int j=l-1;j<n&&j<=r-1;j++)  // 区间左闭右闭，转为 0 下标
        {
            if(c[j]==a)
            {c[j]=b;}
        }
    }
    cout<<c;
}
