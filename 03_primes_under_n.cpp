/*
 * 题号：03
 * 题目：求 n（10 < n < 100）以内的全部素数
 * 描述：输入 n，输出 n 以内所有素数，每行 5 个，彼此以空格分隔。
 */
#include<iostream>
#include<cmath>
#include<cstdio>
int main()
{
	int a,i,j;
	scanf("%d",&a);
	int c=0;// 已输出素数计数
	for(i=2;i<=a;i++)
	{
		for(j=2;j*j<=i;j++)
			//TODO
		{
			if(i%j==0)
			{break;}
		}
		if(j*j>i)  // 内层循环正常结束，说明 i 是素数
			{
				printf("%d",i);
				c++;
				if(c%5==0)  // 每满 5 个换一行
				{
					printf("\n");
				}
				else{printf(" ");}  // 否则以空格分隔
				
			}
	}
	
	
	return 0;
}
