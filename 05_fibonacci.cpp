/*
 * 题号：05
 * 题目：斐波那契数列
 * 描述：生成并输出前 20 项斐波那契数列，每行 5 个数，以制表符分隔。
 */
#include <stdio.h>
int main() 
{
    int s[20] = {1, 1}, i;  // 前两项初始化为 1
    for (i = 2; i < 20; i++) 
    {
        s[i] = s[i-1] + s[i-2];  // 每一项等于前两项之和
    }
    for (i = 0; i < 20; i++) 
    {
        if (i % 5 == 0) printf("\n");  // 每 5 个换一行
        printf("%d\t", s[i]);
    }
    printf("\n");
    return 0;
}
