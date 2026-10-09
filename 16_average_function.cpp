/*
 * 题号：16
 * 题目：函数求两数平均数
 * 描述：用自定义函数 getaverage 求两个整数的平均值并输出。
 */
#include <stdio.h>

// 求两个数的平均值
int getaverage(int x,int y)
{
	int result;
	result=(x+y)/2;
	return result;
}
int main()
{
	int a,b,average;
	scanf("%d %d",&a,&b);
	average=getaverage(a,b);
	printf("%d",average);
	return 0;
}
