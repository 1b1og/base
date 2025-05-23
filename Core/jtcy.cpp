#include<iostream>
using namespace std;
//静态成员  在成员变量和成员函数前加上关键字static,称为静态成员
//静态成员变量:所有对象共享同一份数据，在编译阶段分配内存（在全局区），类内声明类外初始化
//静态成员函数:所有对象共享同一个函数，静态成员函数只能访问静态成员变量

class Person
{
    public:
    //静态成员变量
    static int m_A; //类内声明
    
    //静态成员函数
    static void func()
    {
        m_A=200;  //静态成员函数可以访问静态成员变量
        // m_B=100;  // 静态成员函数不可以访问非静态成员变量,无法区分到底是哪个对象的m_B属性 
        cout<<"static func()调用"<<endl;
    }
    int m_B;
    //静态成员变量也是有访问权限的
    // private:
    // static int m_B;

    //静态成员函数也是有访问权限的
    //private:
    // static void func1()
    // {
    //     cout<<"static func1()调用"<<endl;
    // }
};

int Person::m_A=100;// 类外初始化  不能在函数体内初始化
// int Person::m_B=200;  // 私有权限的静态成员变量类外访问不到
void test01()
{
    Person p;
    // p.m_A=200;
    cout<<p.m_A<<endl;
    Person p1;
    p1.m_A=200;
    cout<<p1.m_A<<endl;
}

void test02()
{
    //静态成员变量 不属于某个对象上，所有对象都共享同一份数据
    //因此静态成员变量有两种访问方式

    //1.通过对象进行访问
    // Person p;
    // cout<<p.m_A<<endl;
    //2.通过类名进行访问
    cout<<Person::m_A<<endl;
    // cout<<Person::m_B<<endl;
}

void test03()
{
    //两种访问方式
    //1.通过对象进行访问
    Person p;
    p.func();
    //2.通过类名进行访问
    Person::func();
    // Person::func1(); //类外访问不到私有静态成员函数
}

int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}