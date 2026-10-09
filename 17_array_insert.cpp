/*
 * 题号：17
 * 题目：数组插入数
 * 描述：向一个升序整数数组中插入一个新数，保持升序后输出结果序列。
 */
#include<cstdio>
#include<cmath>
int main()
{
    int n;
    scanf("%d\n",&n);  // 读取整数 n，\n 表示跳过换行符
    int a[50];         // 声明大小为 50 的整型数组
    int i,j;
    
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);  // 循环读取 n 个整数
    }
    
    int b;
    scanf("%d",&b);  // 读取要插入的整数
    
    int result[51];  // 结果数组，比原数组多 1 个位置
    int count= 0;    // 结果数组计数器
    int inserted = 0; // 标记是否已插入 b
    
    // 核心插入逻辑
    for(j=0;j<n;j++)
    {
        if(!inserted && a[j] >= b)
        {
            result[count] = b;  // 在当前位置插入 b
            count++;
            inserted = 1;
        }
        result[count] = a[j];  // 复制原数组元素
        count++;
    }
    
    if(!inserted)  // 遍历完仍未插入，说明 b 最大，插到末尾
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
}
