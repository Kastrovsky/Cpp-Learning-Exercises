/*
 * 题号：22
 * 题目：下一个周日（7-10）
 * 描述：输入今天是星期几（三个大写字母），输出下一个周日是几天之后。
 */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char day[4];
    cin>>day;
    int count;  // 今天是一周中的第几天（1~7）

    char days[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    for(int i=0;i<7;i++)
    {
        if(strcmp(day,days[i])==0)  // 匹配今天
        {
            count=i+1;
            if(count==7)
            {cout<<7;}  // 今天是周日，下个周日仍是 7 天后
            else
            {cout<<(7-count);}
            break;
        }
        
    }
}
