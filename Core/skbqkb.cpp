#include<iostream>
using namespace std;
//深拷贝与浅拷贝
//浅拷贝：简单的复制拷贝操作   带来的问题  堆区的内存重复释放 利用深拷贝进行解决
//深拷贝：在堆区重新申请空间，进行拷贝操作

// 如果利用编译器提供的拷贝构造函数，会做浅拷贝操作
// 如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
class Person
{
public:

    Person()
    {
        cout<<"Person的默认构造函数调用"<<endl;
    }

    Person(int age,int height)
    {
        cout<<"Person的有参构造函数调用"<<endl;
        m_age=age;
        m_height=new int(height);
        //new 的基本语法  new 数据类型（）
        //在堆区创建数据
        //new返回的是 该数据类型的指针
    }
    //自己实现一个构造函数 解决浅拷贝带来的问题
    Person(const Person &p)
    {
        cout<<"Person的拷贝构造函数调用"<<endl;
        m_age=p.m_age;
        // m_height=p.m_height; // 编译器默认实现的是这行代码
        //深拷贝操作
        m_height=new int (*p.m_height);
    }
    ~ Person()
    {
        //析构函数 将堆区开辟数据做释放操作
        if(m_height != NULL)
        {
            delete m_height;
            // 堆区的数据由程序员管理开辟和释放
            // 如果想释放堆区的数据 用关键字delete
            m_height=NULL; //防止野指针出现 指针置空
        }
        cout<<"Person的析构函数调用"<<endl;
    }
    
    
    int m_age;
    int * m_height;
};

void test01()
{
    Person p1(18,160);

    cout<<"p1的年龄为："<<p1.m_age<<" p1的身高为："<<*p1.m_height<<endl;

    Person p2(p1);

    cout<<"p2的年龄为："<<p2.m_age<<" p2的身高为："<<*p2.m_height<<endl;
}
int main()
{
    test01();
    return 0;
}