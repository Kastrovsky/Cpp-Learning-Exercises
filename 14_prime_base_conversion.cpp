/*
 * 题号：14
 * 题目：素数进制转换
 * 描述：把十进制数 X 转换为“素数进制”——第 i 位基数为第 i 个素数（2,3,5,7...）。
 *      输入 X 和 N，输出从低位到高位的前 N 位数字，不足高位补 0。
 */
#include<iostream>
#include<cmath>
#include<cstdio>
int main()
{
	long long int x;
	int n;
	scanf("%lld %d",&x,&n);
	int a[n];  // 存放前 n 个素数作为基数
	int i,j,l,c=0;
	for(i=2;c<n;i++)
	{
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				break;	//TODO
			}
		}
		if(j*j>i)  // i 是素数
		{	
			a[c]=i;
			c++;
			//TODO
		}
		
	}
	int e;
	for(l=0;l<n;l++)
	{
		
		e=x%a[l];  // 当前位余数
		
		printf("%d",e);
		if(l<n-1)
		printf(" ");
		x/=a[l];  // 除以当前素数基数得到新的商
	}
	return 0;
}
