#include<iostream>
using namespace std;
//成员函数做友元
class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();//让visit函数可以访问Building类中的私有成员
    void visit2();//让visit2函数不可以访问Building类中的私有成员
    Building *building;
};
class Building
{
    //告诉编译器GoodGay类下的visit函数作为本类的友元 可以访问本类的私有成员
    friend void GoodGay::visit();
public:
    Building();
    string m_SittingRoom;
private:
    string m_BedRoom;
};
//类外实现成员函数
GoodGay::GoodGay()
{
    building=new Building;
}
void GoodGay::visit()
{
    cout<<"visit正在访问："<<building->m_SittingRoom<<endl;
    cout<<"visit正在访问："<<building->m_BedRoom<<endl;
}
void GoodGay::visit2() //不是Building类的友元 不能访问Building类的私有成员
{
    cout<<"visit2正在访问："<<building->m_SittingRoom<<endl;
    // cout<<"visit2正在访问："<<building->m_BedRoom<<endl;
}
Building::Building()
{
    m_SittingRoom="客厅";
    m_BedRoom="卧室";
}
void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}
int main()
{
    test01();
    return 0;
}