#include<iostream>
using namespace std;
//继承中同名静态成员处理方式
class Base
{
public:
    static void func()
    {
        cout<<"Base-func()调用"<<endl;
    }
    static void func(int a)
    {
        cout<<"Base-func(int a)调用"<<endl;
    }
    static int m_a;//静态成员属性类内声明类外初始化
};
class Son:public Base
{
public:
    static void func()
    {
        cout<<"Son-func()调用"<<endl;
    }
    static int m_a;
};
int Base::m_a=100;
int Son::m_a=200;
//同名成员属性
void test01()
{
    Son s;
    //通过对象访问
    cout<<"通过对象访问："<<endl;
    cout<<"Base下m_a="<<s.Base::m_a<<endl;
    cout<<"Son下m_a="<<s.m_a<<endl;
    //通过类名访问
    cout<<"通过类名访问："<<endl;
    //第一个::代表类名方式访问，第二个::代表访问父类作用域下
    cout<<"Base下m_a="<<Son::Base::m_a<<endl;
    cout<<"Son下m_a="<<Son::m_a<<endl;
}
//同名成员函数
void test02()
{
    //通过对象访问
    Son s;
    s.func();
    s.Base::func();
    s.Base::func(100);
    //通过类名访问
    Son::func();
    Son::Base::func();
    Son::Base::func(100);
}
int main()
{
    // ßtest01();
    test02();
    return 0;
}