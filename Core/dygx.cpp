#include<iostream>
#include<math.h>
#include<string>
using namespace std;
//设计点类
class point
{
    public:
      //设置点的横坐标
      void setPx(double x)
      {
          p_x=x;
      }
      //获取点的横坐标
      double getPx()
      {
        return p_x;
      }
      //设置点的纵坐标
      void setPy(double y)
      {
        p_y=y;
      }
      //获取点的纵坐标
      double getPy()
      {
        return p_y;
      }
    private:
      double p_x;
      double p_y;
};
//设计圆类
class circle
{
    public:
    //设置半径
    void setr(double r)
    {
        c_r=r;
    }
    //获取半径
    double getr()
    {
        return c_r;
    }
    //设置圆心
    void setCenter(point center)
    {
        c_center=center;
    }
    //获取圆心
    point getCenter()
    {
        return c_center;
    }
    private:
      double c_r;
      point c_center;
};
//判断点和圆的关系
void isInCircle(circle & c,point & p)
{
    //计算两点之间距离的平方
    double distance=
    (c.getCenter().getPx()-p.getPx())*(c.getCenter().getPx()-p.getPx())+
    (c.getCenter().getPy()-p.getPy())*(c.getCenter().getPy()-p.getPy());
    //计算半径的平方
    double rdistance=c.getr()*c.getr();
    if(distance>rdistance)
      cout<<"点在圆外"<<endl;
    else if(distance==rdistance)
      cout<<"点在圆上"<<endl;
    else  
      cout<<"点在圆内"<<endl;
}
int main()
{
    double r,x,y;
    cin>>r>>x>>y;
    circle c1;
    c1.setr(r);
    point p1;
    p1.setPx(x);
    p1.setPy(y);
    c1.setCenter(p1);
    double x1,y1;
    cin>>x1>>y1;
    point p2;
    p2.setPx(x1);
    p2.setPy(y1);
    isInCircle(c1,p2);
    return 0;
}