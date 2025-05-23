#include<iostream>
using namespace std;
//拷贝构造函数调用时机
//使用一个已经创建完毕的对象来初始化一个新对象
//值传递的方式给函数参数传值
//以值方式返回局部对象
class Person
{
public:
    Person()
    {
        cout<<"Person默认构造函数调用"<<endl;
    }
    Person(int age)
    {
        m_age=age;
        cout<<"Person有参构造函数调用"<<endl;
        cout<<"有参年龄为： "<<m_age<<endl;
    }
    Person(const Person &p)
    {
        m_age=p.m_age;
        cout<<"Person拷贝构造函数调用"<<endl;
        cout<<"拷贝年龄为： "<<m_age<<endl;
    }
    // int getAge(Person p)
    // {
    //     m_age=p.m_age;
    //     return m_age;
    // }
    ~Person()
    {
        cout<<"Person析构函数调用"<<endl;
    }
// private:
    int m_age;
};

//使用一个已经创建完毕的对象来初始化一个新对象
// void test01()
// {
//     Person p1(20);
//     Person p2(p1);
//     cout<<"p2的年龄为："<<p2.m_age<<endl;
// }

//值传递的方式给函数参数传值
// void doWork(Person p) //用拷贝构造函数拷贝一个p 和下面的p不是同一个p
// {

// }
// void test02()
// {
//     Person p(20);
//     doWork(p);
// }

//以值方式返回局部对象
Person  doWork2()
{
     Person p1;
     cout<<(int*)&p1<<endl;
     return p1;
}
void test03()
{
     Person p=doWork2();
     cout<<(int*)&p<<endl;
}
int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}