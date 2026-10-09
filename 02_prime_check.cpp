/*
 * 题号：02
 * 题目：质数（素数）判断
 * 描述：输入一个正整数，判断它是否为质数并输出结果。
 */
#include <stdio.h>

int main() 
{
    int n, i;
    scanf("%d", &n);
    if (n == 1) 
    {
        printf("1 不是质数");
        return 0;
    }
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0)  // 能被整除说明不是质数
        {
            break;
        }
    }
    if (i < n) 
    {
        printf("%d不是质数", n);
    }
    else 
    {
        printf("%d是质数", n);
    }
    return 0;
}
