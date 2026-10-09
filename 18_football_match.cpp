/*
 * 题号：18
 * 题目：足球赛积分排名
 * 描述：n 支球队进行 q 场比赛，胜 +3、负 -2（不足 2 分归零）、平局双方 0 分。
 *      比赛结束后输出积分最高且编号最小的球队编号。
 */
#include<cstdio>
#include<cmath>
int main()
{
    int n,q;// n：球队数，q：场次数
    scanf("%d %d",&n,&q);
    int scores[101]={0};

    for(int i=0;i<q;i++)
    {
        int a,b,sa,sb;
        scanf("%d %d %d %d",&a,&b,&sa,&sb);

        if(sa>sb)  // a 胜
        {
            scores[a]+=3;
            if(scores[b]<2)
            {scores[b]=0;}  // 败方扣分，不足 2 分归零
            else
            {scores[b]-=2;}
        }
        else if(sa<sb)  // b 胜
        {
            scores[b]+=3;
            if(scores[a]<2)
            {scores[a]=0;}
            else
            {scores[a]-=2;}
        }
        // 平局双方均不加不减
    }
    int max=0;
    int winner=1;
    for(int i=1;i<=n;i++)
    {
        if(scores[i]>max)  // 严格大于才更新，保证并列时取最小编号
        {
            max=scores[i];
            winner=i;
        }
    }
    printf("%d\n",winner);
    return 0;
}
