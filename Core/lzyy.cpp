#include<iostream>
#include<string>
using namespace std;
//类做友元
class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();//参观函数 访问Building中的属性
    Building *building;
    ~GoodGay();
};
class Building
{
    friend class GoodGay;  //让GoodGay类做Building类友元 可以访问Building类中的私有成员
public:
    Building();
    string m_SittingRoom;
private:
    string m_BedRoom;
};

//类外实现成员函数
Building::Building()
{
    m_SittingRoom="客厅";
    m_BedRoom="卧室";
}

GoodGay::GoodGay()
{
    //创建建筑物类对象
    building=new Building;
}
GoodGay::~GoodGay()
{
    delete building;
    cout<<"被释放"<<endl;
}
void GoodGay::visit()
{
    cout<<"gg正在访问："<<building->m_SittingRoom<<endl;
    cout<<"gg正在访问："<<building->m_BedRoom<<endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
}
int main()
{
    test01();
    return 0;
}