/*
 * 题号：15
 * 题目：向有序序列插入一个整数
 * 描述：输入升序序列与新整数，插入后保持升序输出。
 */
#include<cstdio>
#include<cmath>
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[50];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int b;
    scanf("%d",&b);
    int result[51];
    int count= 0;
    int inserted = 0;  // 是否已插入新数
    for(j=0;j<n;j++)
    {
        if(!inserted && a[j] >= b)
        {
            result[count] = b;  // 找到插入位置
            count++;
            inserted = 1;
        }
        result[count] = a[j];
        count++;
    }
    if(!inserted)  // 若新数最大，插到末尾
    {
        result[count] = b;
        count++;
    }
    
    for(int i=0;i<count;i++)
    {
        printf("%d", result[i]);
        if(i!=count-1)
        {
            printf(" ");
        }
    }
    return 0;
}
