/*
 * 题号：25
 * 题目：汉诺塔
 * 描述：输入圆盘数 n 与三根柱名，按规则输出将整塔从第一根柱移到第三根柱的移动步骤。
 */
#include <stdio.h>

// 递归移动：将 n 个盘从 a 经 c 移到 b
void h(int n, char a, char b, char c) {
    if (n == 1) printf("%c->%c\n", a, b);
    else {
        h(n - 1, a, c, b);
        printf("%c->%c\n", a, b);
        h(n - 1, c, b, a);
    }
}

int main() {
    int n;
    char s1[10], s2[10], s3[10];
    scanf("%d %s %s %s", &n, s1, s2, s3);
    // 目标柱为 s3，借助 s2
    h(n, s1[0], s3[0], s2[0]);
    return 0;
}
