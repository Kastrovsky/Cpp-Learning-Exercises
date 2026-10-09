/*
 * 题号：26
 * 题目：集合乘积排序去重（行知乘）
 * 描述：输入两个集合，输出它们两两乘积的集合，从小到大排序、去重后输出。
 */
#include<cstdio>
#include <iostream>
#include<algorithm>
using namespace std;

// 计算两个集合的笛卡尔乘积并排序，返回元素个数
int mu(int a,int b,int x[],int y[],int result[])
{
    int e=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            result[e]=x[i]*y[j];
            e++;
        }
    }
    sort(result,result+e);  // 排序（result 为数组首地址）
    return e;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x[a],y[b];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<b;i++)
    {
        scanf("%d",&y[i]);
    }
    int products[400];
    int e=mu(a,b,x,y,products);
    if(e>0)
    {
        printf("%d",products[0]);
        for(int i=1;i<e;i++)
        {
            if(products[i]!=products[i-1])  // 跳过重复值
            {
                printf(" %d",products[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
