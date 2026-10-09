/*
 * 题号：36
 * 题目：寻找高山（7-8）
 * 描述：给定海拔矩阵，相对高度 = 山顶海拔 - 相邻（上下左右）最低海拔（边界外视为 0）。
 *      输出相对高度最高位置的坐标（行优先，相同取第一个）。
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int peak[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>peak[i][j];
        }
    }
    int maxh=-1;  // 记录最大相对高度
    int r,l;  // 记录最高位置坐标
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int minsh1,minsh2,minsh3,minsh4,minsh=8848;  // 四周最小高度，初值设为最大海拔
            int ch=peak[i][j];  // 当前处理点的高度
            if(i==0||i==n-1||j==0||j==m-1)  // 边界点：四周视为 0
            {
                minsh=0;
            }
            else  // 内部点：取上下左右最小值
            {
                minsh1=peak[i-1][j];
                minsh2=peak[i+1][j];
                minsh3=peak[i][j-1];
                minsh4=peak[i][j+1];
                int mh=min(minsh1,minsh2);
                int ml=min(minsh3,minsh4);
                minsh=min(mh,ml);
            }
            int maxrelative=ch-minsh;  // 相对高度
            if(maxrelative>maxh)
            {
                maxh=maxrelative;
                r=i+1;  // 坐标从 1 开始
                l=j+1;
            }
        }
    }
    cout<<r<<","<<l;
    return 0;
}
