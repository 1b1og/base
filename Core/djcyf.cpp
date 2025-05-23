#include<iostream>
using namespace std;
//多继承语法
class Base1
{
public:
    Base1()
    {
        m_A=100;
    }
    int m_A;
};

class Base2
{
public:
    Base2()
    {
        m_A=200;
    }
    int m_A;
};

class Son:public Base1,public Base2
{
public:
    int m_C;
    int m_D;
};
void test01()
{
    Son s;
    //父类中有同名成员需要加作用域区分
    cout<<"Base1::m_A="<<s.Base1::m_A<<endl;
    cout<<"Base2::m_A="<<s.Base2::m_A<<endl;
}
int main()
{
    test01();
    return 0;
}