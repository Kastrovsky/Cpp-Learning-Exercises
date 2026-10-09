/*
 * 题号：19
 * 题目：扫雷（7-17）
 * 描述：输入雷区字符矩阵（'*' 为雷，'?' 为未知），输出每个非雷格周围 8 格的雷数。
 */
#include<cstdio>
#include<cmath>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    getchar();  // 消耗输入缓冲区中的换行符
    char a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();  // 每行输入后消耗换行符
    }

    char result[m][n];
    int dx[]={-1,1,0,0,-1,-1,1,1};  // 8 个方向的行偏移
    int dy[]={0,0,-1,1,-1,1,-1,1};  // 8 个方向的列偏移
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='*')
            {
                result[i][j]='*';  // 雷格直接保留
            }
            else
            {
                int count=0;
                for(int k=0;k<8;k++)
                {
                    int ni=i+dx[k];
                    int nj=j+dy[k];
                    if(ni>=0&&ni<m&&nj>=0&&nj<n)
                    {
                        if(a[ni][nj]=='*')
                        count++;
                    }
                }
                result[i][j]=count+'0';  // 数字转字符
            }
            
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c",result[i][j]);
        }
        printf("\n");
    }
return 0;

}
