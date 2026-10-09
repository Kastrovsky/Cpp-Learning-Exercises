/*
 * 题号：28
 * 题目：动态内存学生成绩统计
 * 描述：用 malloc 动态分配数组，读入 n 个学生成绩，输出平均分、最高分、最低分。
 */
#include <stdio.h>
#include<stdlib.h>

void handle(int n)
{
    float *score=(float*)malloc(n*sizeof(float));  // 动态分配 n 个 float

    for(int i=0;i<n;i++)
    {
        scanf("%f",&score[i]);
    }
    float sum=score[0],max=score[0],min=score[0];

    for(int i=1;i<n;i++)
    {
        sum+=score[i];
        if(score[i]>max){max=score[i];}
        if(score[i]<min){min=score[i];}
    }

    printf("average = %.2f\n",sum/n);
    printf("max = %.2f\n",max);
    printf("min = %.2f\n",min);

    free(score);  // 释放内存
}
int main()
{
    int n;
    scanf("%d",&n);
    handle(n);
    return 0;
}
