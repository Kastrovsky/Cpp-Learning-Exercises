/*
 * 题号：12
 * 题目：杨辉三角
 * 描述：输入 n（n <= 10），输出杨辉三角的前 n 行，元素之间以空格分隔。
 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int triangle[10][10]; // 因 n <= 10，定义 10×10 数组
    
    // 生成杨辉三角
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                triangle[i][j] = 1;  // 每行首尾元素为 1
            } else {
                // 其余元素等于上一行左上与正上两元素之和
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }
    
    // 输出杨辉三角
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d", triangle[i][j]);
            if(j < i) {
                printf(" ");  // 元素之间用空格分隔
            }
        }
        printf("\n");
    }
    
    return 0;
}
