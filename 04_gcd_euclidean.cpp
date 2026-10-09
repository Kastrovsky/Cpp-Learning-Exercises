/*
 * 题号：04
 * 题目：欧几里得算法求最大公约数
 * 描述：输入两个正整数，用辗转相除法计算并输出它们的最大公约数。
 */
#include<cstdio>
#include<cmath>
int main()
{
    long long int a,b,r;
    scanf("%lld %lld",&a,&b);
    while(1)
    {
        if(r==0)
        {break;}
        r=a%b;
        a=b;
        b=r;
        
        
    }
    printf("%lld",a);
}
