/*
 * 题号：07
 * 题目：求区间内能整除 n 的数
 * 描述：输入 n，输出 2 到 n-1 之间所有能整除 n 的数，空格分隔；若没有则输出 none.
 */
#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int found = 0;  // 标记是否找到至少一个因子
    
    for (int i = 2; i < n; i++)  // 从 2 开始到 n-1
    {
        if (n % i == 0) 
        {
            if (!found) 
            {
                printf("%d", i);  // 第一个因子直接输出
                found = 1;
            } 
            else 
            {
                printf(" %d", i);  // 其余因子前补一个空格
            }
        }
    }
    
    if (!found) 
    {
        printf("none.");  // 没有因子则输出 none
    }
    printf("\n");
    return 0;
}
