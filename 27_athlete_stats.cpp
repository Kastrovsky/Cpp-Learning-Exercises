/*
 * 题号：27
 * 题目：运动员平均数与标准差
 * 描述：输入若干运动员的 6 次百米成绩，输出平均成绩最小与标准差最小的运动员编号。
 */
#include<cstdio>
#include<cmath>
#include <iostream>
#include<algorithm>
using namespace std;

// 通过指针返回一组数据的平均值与标准差
void calc_stats(double arr[],int n,double *avg,double *stdd)
{
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    *avg=sum/n;  // 平均值
    double sums=0;
    for(int i=0;i<n;i++)
    {
        double diff=arr[i]-*avg;
        sums+=diff*diff;
    }
    *stdd=sqrt(sums/n);  // 标准差
}
int main()
{
    int n;
    scanf("%d",&n);
    double scores[100][6];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%lf",&scores[i][j]);
        }
    }

    double avg,stdd;
    double cuavg,custdd,minavg,minstdd;
    int avgposition=0,stddposition=0;
    calc_stats(scores[0],6,&minavg,&minstdd);  // 以第 0 号为基准
    for(int i=1;i<n;i++)
    {
        calc_stats(scores[i],6,&cuavg,&custdd);
        if(cuavg<minavg)  // 更新平均最小者
        {
            minavg=cuavg;
            avgposition=i;
        }
        if(custdd<minstdd)  // 更新标准差最小者
        {
            minstdd=custdd;
            stddposition=i;
        }
    }

    printf("The shortest average time (%.3f) is from No.%d\n",minavg,avgposition);
    printf("The smallest standard deviation (%.3f) is from No.%d\n",round(minstdd * 1000) / 1000,stddposition);
    return 0;
}
