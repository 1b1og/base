#include<iostream>
using namespace std;
//设计立方体类
//利用全局函数和成员函数 判断两个立方体是否相等
class cube
{
public:
    void setl(double l)
    {
        m_l=l;
    }
    void seth(double h)
    {
        m_h=h;
    }
    void setw(double w)
    {
        m_w=w;
    }
    double getl()
    {
        return m_l;
    }
    double geth()
    {
        return m_h;
    }
    double getw()
    {
        return m_w;
    }
    double Scube(double l,double h,double w)
    {
        return 2*(l*h+l*w+h*w);
    }
    double Vcube(double l,double h,double w)
    {
        return l*h*w;
    }
    bool isSameByClass(cube &c)  //成员函数
    {
        if(m_l==c.getl()&&m_h==c.geth()&&m_w==c.getw())
        {
            return true;
        }
        return false;
    }
private:
    double m_l;
    double m_h;
    double m_w;
};
//全局函数
bool isSame(cube & c1,cube & c2)
{
    if(c1.getl()==c2.getl()&&c1.geth()==c2.geth()&&c1.getw()==c2.getw())
        {
            return true;
        }
        return false;
}
int main()
{
    //第一个立方体
    cube c1;
    double l,h,w;
    cin>>l>>h>>w;
    c1.setl(l);
    c1.seth(h);
    c1.setw(w);   
    cout<<"立方体面积为： "<<c1.Scube(l,h,w)<<endl;
    cout<<"立方体体积为： "<<c1.Vcube(l,h,w)<<endl;

    //创建第二个立方体
    cube c2;
    double l2,h2,w2;
    cin>>l2>>h2>>w2;
    c2.setl(l2);
    c2.seth(h2);
    c2.setw(w2);
    // if(l==l2&&h==h2&&w==w2)
    //   cout<<"两个立方体相等"<<endl;
    // else  
    // cout<<"两个立方体不相等"<<endl;
    bool ret=isSame(c1,c2);
    if(ret)
    {
        cout<<"全局函数 两个立方体相等"<<endl;
    }
    else  
     {
        cout<<"全局函数 两个立方体不相等"<<endl;
     }
    bool ret1=c1.isSameByClass(c2);  //成员函数 用一个形参即可 第一个立方体已知 用第二个立方体和第一个比较
    if(ret1)
    {
        cout<<"成员函数 两个立方体相等"<<endl;
    }
    else  
     {
        cout<<"成员函数 两个立方体不相等"<<endl;
     }
    return 0;
}