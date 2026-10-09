/*
 * 题号：30
 * 题目：指针访问二维数组元素
 * 描述：输入矩阵及下标 (row,col)，用指针方式访问并输出该位置的元素。
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 用首地址 + 偏移访问二维数组元素：matrix + row*N + col
int getElement(int *matrix, int M, int N, int row, int col)
{
    return *(matrix+row*N+col);
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int i,j;
    for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
            {scanf("%d",&a[i][j]);}}
    int row;
    int col;
    scanf("%d %d",&row,&col);
    
    printf("%d",getElement(&a[0][0],m,n,row,col));
}
