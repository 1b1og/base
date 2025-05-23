#include<iostream>
using namespace std;
//继承中同名成员处理方式
class Base
{
public:
    Base()
    {
        m_a=100;
    }
    void func()
    {
        cout<<"Base下func()函数调用"<<endl;
    }
    void func(int a)
    {
        cout<<"Base 下 func(int a)函数调用"<<endl;
    }
    int m_a;
};
class Son:public Base
{
public:
    Son()
    {
        m_a=200;
    }
    void func()
    {
        cout<<"Son下func()函数调用"<<endl;
    }
    
   int m_a;
};

//同名属性处理方式
void test01()
{
    Son s;
    cout<<"Son  下 m_a="<<s.m_a<<endl;
    cout<<"Base 下 m_a="<<s.Base::m_a<<endl;
}

//同名函数处理方式
void test02()
{
    Son s;
    s.func();
    s.Base::func();
    //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
    //如果想访问父类中被隐藏的同名成员函数，需要加作用域
    s.Base::func(100);
}
int main()
{
    // test01();
    test02();
    return 0;
}