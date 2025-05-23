#include<iostream>
using namespace std;
//友元  关键字friend
//友元的目的是让一个函数或者类访问另一个类中的私有成员
//友元的三种实现 ：全局函数做友元，类做友元，成员函数做友元

//建筑物类
class Building
{
    //goodGay全局函数是Building类的好朋友，可以访问Building中的私有成员
    friend void goodGay(const Building &building);
    public:
    Building()
    {
        m_SittingRoom="客厅";
        m_Bedroom="卧室";
    }
    
    string m_SittingRoom;

    private:
    string m_Bedroom; 
};

//全局函数
void goodGay(const Building & building)
{
    cout<<"全局函数正在访问："<<building.m_SittingRoom<<endl;
    cout<<"全局函数正在访问："<<building.m_Bedroom<<endl;
}

void test01()
{
    Building building;
    goodGay(building);
    // cout<<"全局函数正在访问："<<building.m_SittingRoom<<endl;

}
int main()
{
    test01();
    return 0;
}