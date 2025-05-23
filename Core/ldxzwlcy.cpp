#include<iostream>
#include<string>
using namespace std;
//类对象作为类成员
//C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
class Phone
{
public:
    Phone(string pname)
    {
        cout<<"Phone的构造函数的调用"<<endl;
        m_pname=pname;
    }
    ~Phone()
    {
        cout<<"Phone的析构函数的调用"<<endl;
    }
    string m_pname;  //手机名称
};
class Person
{
public:
    Person(string name,string pname):m_name(name),m_phone(pname) //编译器会写成 Phone m_phone = pname; 隐式转换法
    {                                                            // Phone m_phone = Phone(pname);
        cout<<"Person的构造函数的调用"<<endl;
    }
    ~Person()
    {
        cout<<"Person的析构函数的调用"<<endl;
    }
    string m_name; //姓名
    Phone m_phone; // 手机
};

//当其他类对象作为本类成员，构造时候先构造类对象，在构造类自身
//析构的顺序与构造相反
void test01()
{
    Person p("张三","apple15pm");
    cout<<p.m_name<<"拿着："<<p.m_phone.m_pname<<endl;
}
int main()
{
    test01();
    return 0;
}