/*
 * 题号：13
 * 题目：截整数（取前 m 位）
 * 描述：输入正整数 n 和 m，输出整数 n 的前 m 位（从左到右）。
 */
#include<iostream>
#include<cmath>
#include<cstdio>
int main()
{
	long long int n;
	int m;
	scanf("%lld %d",&n,&m);
	int count=0;  // 记录 n 的总位数
	long long int t=n;
	while(t>0)
	{
		t/=10;
		count++;
	}
	int a[count];  // 从低位到高位存放各位数字
	for(int i=0;i<count;i++)
	{
		if(n>0)
		{
			a[i]=n%10;  // 取最低位
			n/=10;
		}	
		//TODO
	}
	for(int j=count-1;j>=count-m;j--)// j 从最高位开始，取前 m 位
	{
		printf("%d",a[j]);
		//TODO
	}
	return 0;
}
