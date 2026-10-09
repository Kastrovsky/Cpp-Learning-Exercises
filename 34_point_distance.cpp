/*
 * 题号：34
 * 题目：Point 类两点距离
 * 描述：定义 Point 类（私有成员 x,y），用成员函数计算并输出两点间距离，保留两位小数。
 */
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
class point
{
    private:
    double x,y;
    public:

    void setco(double xl,double yl)
    {
        x=xl;
        y=yl;
    }
    void d(const point&other)  // 计算与另一点的距离
    {
        double dx=x-other.x;
        double dy=y-other.y;
        double dxy=pow((dx*dx+dy*dy),0.5);  // 欧氏距离
        cout<<fixed<<setprecision(2)<<dxy;
    }
};
int main()
{
    point cp[2];
    double a,b;
    for(int i=0;i<2;i++)
    {
        cin>>a>>b;
        cp[i].setco(a, b);
    }
    cp[0].d(cp[1]);  // 输出第一点到第二点的距离
    return 0;
}
