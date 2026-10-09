/*
 * 题号：06
 * 题目：矩阵转置
 * 描述：输入一个 a 行 b 列的矩阵，按行列互换输出其转置矩阵。
 */
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int t[a][b];
    
    // 输入矩阵
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            scanf("%d", &t[i][j]);
        }
    }
    
    // 输出转置矩阵：原列变行
    for (int j = 0; j < b; j++)  // 外层循环遍历原列
    {
        for (int i = 0; i < a; i++)  // 内层循环遍历原行
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
