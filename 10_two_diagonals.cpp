/*
 * 题号：10
 * 题目：同时输出两条对角线
 * 描述：输入矩阵，输出主对角线与副对角线元素，并分别求和、求总和。
 */
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int t[a][b];
    
    // 输入矩阵
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            scanf("%d", &t[i][j]);         
        }
    }
    
    // 输出主对角线元素（行号等于列号）并求和
    printf("主对角线元素: ");
    int main_diag_sum = 0;
    int secondary_diag_sum = 0;
    
    for(int i = 0; i < a; i++)        // 遍历行
    {
        for(int j = 0; j < b; j++)    // 遍历列
        {
            if(i == j)                // 主对角线：行号等于列号
            {
                printf("%d ", t[i][j]);
                main_diag_sum += t[i][j];
            }
        }
    }
    
    // 输出副对角线元素（行号 + 列号 = 列数 - 1）并求和
    printf("\n副对角线元素: ");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(i + j == b - 1)        // 副对角线：行号加列号等于列数减一
            {
                printf("%d ", t[i][j]);
                secondary_diag_sum += t[i][j];
            }
        }
    }
    
    printf("\n主对角线元素和: %d\n", main_diag_sum);
    printf("副对角线元素和: %d\n", secondary_diag_sum);
    printf("两条对角线元素总和: %d\n", main_diag_sum + secondary_diag_sum);
    
    return 0;
}
