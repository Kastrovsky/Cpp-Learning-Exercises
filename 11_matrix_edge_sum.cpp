/*
 * 题号：11
 * 题目：计算矩阵边缘元素之和
 * 描述：输入矩阵，求位于第一行、最后一行、第一列、最后一列的边缘元素之和。
 */
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    int matrix[m][n];
    int sum = 0;
    
    // 输入矩阵
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // 累加边缘元素
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            // 边缘判定：首行、末行、首列、末列
            if(i == 0 || i == m-1 || j == 0 || j == n-1) {
                sum += matrix[i][j];
            }
        }
    }
    
    printf("%d\n", sum);
    
    return 0;
}
