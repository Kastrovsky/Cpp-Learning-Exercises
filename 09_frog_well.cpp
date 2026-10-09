/*
 * 题号：09
 * 题目：青蛙爬井
 * 描述：井深 high，青蛙白天爬 up、夜里滑 down，爬出井口即停止下滑。
 *      输入 high、up、down，输出青蛙爬出井口需要的天数。
 */
#include<cstdio>
#include<cmath>
int main()
{
    long int high,up,down;
    scanf("%ld %ld %ld",&high,&up,&down);
    long int d=0,c=0;  // d：天数，c：当前累计高度
    while(1)
    {
        d++;
        c+=up;  // 先向上爬
        if(c>=high)  // 判断是否已爬出
        {
            break;
        }
        c-=down;  // 未爬出则夜里下滑
    }
    printf("%ld",d);
    return 0;
    
}
