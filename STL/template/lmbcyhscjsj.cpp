#include<iostream>
using namespace std;
//类模板中成员函数创建时机
//类模板中的成员函数并不是一开始就创建的，而是在调用时才去创建
class Person1
{
public:
    void showPerson1()
    {
        cout<<"Person1 show"<<endl;
    }
};

class Person2
{
public:
    void showPerson2()
    {
        cout<<"Person2 show"<<endl;
    }
};

template<class T>
class myClass
{
public:
    T obj;

    //类模板中的成员函数
    void func1()
    {
        obj.showPerson1();
    }

    void func2()
    {
        obj.showPerson2();
    }
};

void test01()
{
    myClass<Person1>m;
    m.func1();

}
int main()
{
    test01();
    return 0;
}