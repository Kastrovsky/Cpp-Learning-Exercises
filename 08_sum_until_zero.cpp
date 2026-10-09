/*
 * 题号：08
 * 题目：累加输入的数字直到遇到 0
 * 描述：不断读入整数并累加，遇到 0 时停止并输出累加和。
 */
#include <stdio.h>
int main() 
{
    int num;
    int sum = 0;
    
    while (1) 
    {
        scanf("%d", &num);
        if (num == 0) 
        {
            break;  // 遇到 0 结束输入
        }
        sum += num;
    }
    
    printf("%d\n", sum);
    return 0;
}
