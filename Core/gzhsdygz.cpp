#include<iostream>
using namespace std;
//构造函数的调用规则
//1.创建一个类，C++编译器会给每个类都添加至少3个函数
//默认构造 (空实现)
//析构函数 (空实现)
//拷贝构造 (值拷贝)


//2.如果我们写了有参构造函数，编译器就不再提供默认构造函数，依然提供拷贝构造函数
//如我我们写了拷贝构造函数，编译器就不再提供其他普通构造函数了
class Person
{
public:

    Person()
    {
        cout<<"Person的默认构造函数调用"<<endl;
    }

    Person(int age)
    {
        cout<<"Person的有参构造函数调用"<<endl;
        m_age=age;
    }

    Person(const Person &p)
    {
        cout<<"Person的拷贝构造函数调用"<<endl;
        m_age=p.m_age;
    }
    ~ Person()
    {
        cout<<"Person的析构函数调用"<<endl;
    }
    
    
    int m_age;
};

// void test01()
// {
//     Person p;
//     p.m_age=18;
//     Person p1(p);
//     cout<<"p1的年龄为："<<p1.m_age<<endl;
// }
void test02()
{
    Person p;
    Person p1(18);
    cout<<"p1的年龄为："<<p1.m_age<<endl;
}
int main()
{   
    // test01();
    test02();
    return 0;
}